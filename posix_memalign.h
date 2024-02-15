/**
 * ************************************
 * Alexis Tercero
 * 2024-02-15
 * alexistercero55@gmail.com
 * Work around for issue #1
 * ************************************
*/
#ifndef POSIX_MEMALIGN_H
#define POSIX_MEMALIGN_H

#include <stdlib.h>

int posix_memalign(void **memptr, size_t alignment, size_t size);

#endif /* POSIX_MEMALIGN_H */
