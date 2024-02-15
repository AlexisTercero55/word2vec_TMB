#ifndef POSIX_MEMALIGN_H
#define POSIX_MEMALIGN_H

#include <stdlib.h>
#include <errno.h>

int posix_memalign(void **memptr, size_t alignment, size_t size);

#endif /* POSIX_MEMALIGN_H */
