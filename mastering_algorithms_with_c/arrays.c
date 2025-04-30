int f() {
    int a[10], *iptr;
    iptr = a;
    iptr[0] = 5;

    return 0;
}

int g() {
    int a[10], *iptr;
    iptr = a;
    *iptr = 5;

    return 0;
}

// above function expresses the same thing
// iptr[0] and *iptr are equivalent
// a[i] is same as *(a + i)

// if pointer contains the address 0x1000, at which a sequence of five 4-byte integers is stored,
// a[3] accesses integer at 0x100c because 3*4 = 12 = c in 16
// for array referencing 20 chars, a[3] access at address 0x1003.

