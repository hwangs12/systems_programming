// POINTERS AND MEMORY

// When a C program is compiled, it works with
// three types of memory

// STATIC/GLOBAL
    // Allocated when program starts
    // remain in existence until program 
    // terminates
    // *Scope of static variables
    // is restricted to their defining function

// AUTOMATIC
    // Created when a function is called
    // Restricted to the function
    // lifetime is limited to function execution

// DYNAMIC
    // Allocated from the heap 
    // can be released as necessary.
    // the scope is limited to the pointer
    // or pointers that reference the memory
    // exists until it is released.