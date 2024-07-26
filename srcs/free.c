#include    "../includes/malloc.h"

// La free() function deallocates the memory allocation pointed to by “ptr”. If “ptr”is
// a NULL pointer, no operation is performed

void    free(void *ptr) {
    if (!ptr) {
        return;
    }
}