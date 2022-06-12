#include "s21_string.h"

void *s21_memset(void *str, int c, s21_size_t n) {
    unsigned char *byte = (unsigned char *)str;
    while (n-- > 0) {
        *byte++ = c;
    }
    return str;
}
