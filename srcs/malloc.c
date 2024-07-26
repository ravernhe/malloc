#include    "../includes/malloc.h"

// The malloc() function allocates “size” bytes of memory and 
// returns a pointer to the allocated memory.

// If there is an error, the malloc() function return a NULL pointer.

void    *malloc(size_t size){
    if (size <= 0) {
        return NULL;
    }
}