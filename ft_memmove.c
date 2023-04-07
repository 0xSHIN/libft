#include "libft.h"

void *memmove(void *dest, const void *src, size_t n) {
    const char *s;
    char *d;
    d = (char *)dest;
    s = (const char *)src;
    size_t i;

    if (d == s) {
        return (dest); // Si les deux zones sont identiques, il n'y a rien à faire.
    }

    if (d < s) {
        // Si la destination est avant la source, copiez les données de gauche à droite.
        i = 0;
        while (i < n) {
            d[i] = s[i];
            i++;
        }
    } else {
        // Si la destination est après la source, copiez les données de droite à gauche.
        while (n > 0) {
            n--;
            d[n] = s[n];
        }
    }

    return (dest);
}