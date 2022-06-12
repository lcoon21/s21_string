#include "s21_string.h"

int s21_strncmp(const char *str1, const char *str2, size_t n) {
    unsigned char c1, c2;
    while (n) {
        c1 = *str1++;
        c2 = *str2++;
        if (c1 != c2) return c1 - c2;
        if (!c1) break;
        n--;
    }
    return 0;
}
