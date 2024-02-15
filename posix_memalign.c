/**
 * ************************************
 * Alexis Tercero
 * 2024-02-15
 * alexistercero55@gmail.com
 * Work around for issue #1
 * ************************************
*/
#include "posix_memalign.h"

int posix_memalign(void **memptr, size_t alignment, size_t size) {
    *memptr = malloc(size);
    return (*memptr == NULL) ? -1 : 0;
}
