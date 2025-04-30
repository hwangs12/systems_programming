void swap2(int *x, int *y) {
    int tmp;
    tmp = *x; *x = *y; *y = tmp;

    return;
}

// when * is used in parameter,
// it means it is a pointer TYPE, not the dereferenced value of that address
// random comment