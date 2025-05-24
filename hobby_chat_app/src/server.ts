import http from 'http'
import ws, { WebSocket } from 'ws'
// Section 2- The WebSocket Server
const wss = new ws.Server({ noServer: true });
// Section 3- WebSocket upgrade
function accept(req: any, res: any) {
    // all incoming requests must be websockets
    if (!req.headers.upgrade || req.headers.upgrade.toLowerCase() != 'websocket') {
        res.end();
        return;
    }

    wss.handleUpgrade(req, req.socket, Buffer.alloc(0), onConnect);
}
// Section 4- Sent message over WebSocket
function onConnect(ws: WebSocket) {
    console.log('user connected');
    ws.send('{}');
    ws.on('message', function (message: Buffer) {
        const clientMessage = convertToJSON(message);
        if (clientMessage.type === 'welcome') {
            ws.send(JSON.stringify({type: 'serverWelcome', content: 'Welcome, ' + clientMessage.content + ' - From Server'}));
            ws.send(JSON.stringify({type: 'messageShareTrigger'}));
        }

        if (clientMessage.type === 'retriggerMessage') {
            ws.send(JSON.stringify({type: 'messageShareTrigger'}));
        }

        if (clientMessage.type === 'sharedMessage') {
            wss.clients.forEach((client) => {
                if (client !== ws) {
                    client.send(JSON.stringify({type: 'broadcast', content: clientMessage.content, username: clientMessage.username}));
                }
            })
        }
    });
}
// Section 1- The HTTP Server
if (!module.parent) {
    http.createServer(accept).listen(8080);
} else {
    exports.accept = accept;
}

function convertToJSON(buffer: Buffer) {
    return JSON.parse(buffer.toString());
}

