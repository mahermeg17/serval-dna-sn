/*
 * ANSI C version of strlcpy
 * Based on the NetBSD strlcpy man page.
 *
 * Nathan Myers <ncm-nospam@cantrip.org>, 2003/06/03
 * Placed in the public domain.
 */

#ifndef HAVE_STRLCPY

#include <stdlib.h>  /* for size_t */
#include <string.h>  /* for strlen, memcpy */

size_t
strlcpy(char *dst, const char *src, size_t size) {
        const size_t len = strlen(src);
        if (size != 0) {
                memcpy(dst, src, (len > size - 1) ? size - 1 : len);
                dst[size - 1] = 0;
        }
        return len;
}

#endif
