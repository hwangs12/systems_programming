typedef struct ListElmt_ {
    void    *data;
    struct ListElmt_ *next;
} ListElmt;

// structures are not permitted to contain instances of themselves,
// but they may contain pointers to instances of themselves
// many data structures are built from components that are self-referential.

/**
* We use pointer to pointer when a function must modify a pointer passed into it
* ex
* here the data will be point to the data removed
*/

int list_rem_next(List *list, ListElmt *element, void **data);