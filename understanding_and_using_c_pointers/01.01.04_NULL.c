// A null pointer and uninitialized pointer are
// different.
// pointer containing NULL does not reference
// any location in memory

// NULL should not be used in contexts other than 
// pointers

// Meaning of zero changes. example
int num;
int *pi = 0; // zero refers to the null pointer
pi = &num;
*pi = 0; // zero refers to the int zero

// pointer to void
void *pv;
    // two interesting properties
    // a pointer to void have same representation 
    // memory alignment as a pointer to char

    // a pointer to void will never be 
    // equal to another pointer. 

    