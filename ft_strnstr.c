#include "libft.h"

const char *strnstr(const char *haystack, const char *needle, size_t haystacklen) {
    if (!*needle) {
        return haystack;
    }

    const char *needle_ptr;
    const char *haystack_ptr;
    size_t needlelen;

    // Calculer la longueur de needle
    needle_ptr = needle;
    while (*needle_ptr++) {
    }
    needlelen = needle_ptr - needle - 1;

    // Rechercher needle dans haystack, en tenant compte de haystacklen
    while (*haystack && haystacklen >= needlelen) {
        haystack_ptr = haystack;
        needle_ptr = needle;

        while (haystacklen && *haystack_ptr == *needle_ptr) {
            haystack_ptr++;
            needle_ptr++;
            haystacklen--;
        }

        if (!*needle_ptr) {
            return haystack;
        }

        haystack++;
        haystacklen--;
    }

    return NULL;
}