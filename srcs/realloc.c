#include    "../includes/malloc.h"

// The realloc() function tries to change the size of the allocation pointed to by “ptr”
// to “size”, and returns “ptr”. If there is not enough room to enlarge the memory
// allocation pointed to by ptr, realloc() creates a new allocation, copies as much of
// the old data pointed to by “ptr” as will fit to the new allocation, frees the old
// allocation, and returns a pointer to the allocated memory.

// If there is an error, the realloc() function return a NULL pointer.

void    *realloc(void *ptr, size_t size){
    if (!ptr) {
        // NULL ptr. realloc should act like malloc.
        return malloc(size);
    }
}