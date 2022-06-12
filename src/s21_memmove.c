#include "s21_string.h"

void *s21_memmove(void *dest, const void *src, s21_size_t n) {
    char *csrc = (char *) src;
    char *cdest = (char *) dest;
    char *temp = (char *) malloc(n * sizeof(char));
    for (s21_size_t i = 0; i < n; i++)
        temp[i] = csrc[i];

    for (s21_size_t i = 0; i < n; i++)
        cdest[i] = temp[i];
    free(temp);
    return dest;
}
