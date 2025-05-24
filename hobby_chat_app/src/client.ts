import readline from 'readline';
import { randomUUID } from 'crypto';

const clientId = randomUUID()

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
})

async function ask(question: string) {
    return new Promise((resolve, reject) => {
        rl.question(question, (answer) => {
            if (answer) {
                resolve(answer);
            } else {
                reject('name not provided');
            }
        })
    })
}

// New socket connection
let socket = new WebSocket("http://localhost:8080");
let username = '';
// Listens to open event on socket connection
socket.onopen = async function (e) {
    console.log("open trigger: New connection established");
    console.log("open trigger: Sending a message to server");
    // Sending message to server 
};
// Listens to message event(new message from server) on socket connection
socket.onmessage = async function (event) {
    const serverMessagePayload = JSON.parse(event.data);
    
    if (Object.keys(serverMessagePayload).length === 0) {
        const response = await ask('What is your name? ');
        username = response as string;
        socket.send(JSON.stringify({type: "welcome", content: response}));
    } else if (serverMessagePayload.type === 'messageShareTrigger') {
        while (1) {
            const response = await ask('Enter Message: ');
            socket.send(JSON.stringify({type: "sharedMessage", content: response, username}));
            console.log('You: ', response);
        }
    } else if (serverMessagePayload.type === 'serverWelcome') {
        console.log(serverMessagePayload.content);
        socket.send(JSON.stringify({type: "retriggerMessage"}))
    } else if (serverMessagePayload.type === 'broadcast') {
        console.log('\n' + serverMessagePayload.username + ': '+ serverMessagePayload.content);
        socket.send(JSON.stringify({type: "retriggerMessage"}))
    } else {
        console.log('\n' + serverMessagePayload.content);
        socket.send(JSON.stringify({type: "retriggerMessage"}))
    }


};
// Listens to close event on socket connection
socket.onclose = function (event) {
    if (event.wasClean) {
        // Connection close as reqeusted
        console.log(`close trigger: Connection closed without any error, code=${event.code} reason=${event.reason}`);
    } else {
        // Connection died due to unknown reason
        console.log(event)
        console.log('close trigger: Connection closed unexpectedly');
    }
};
// Listens to error event on socket connection
socket.onerror = function (error: any) {
    console.log(`error trigger: ${error.message}`);
};
