#include "posix_memalign.h"

int posix_memalign(void **memptr, size_t alignment, size_t size) {
    *memptr = malloc(size);
    return (*memptr == NULL) ? -1 : 0;
}
