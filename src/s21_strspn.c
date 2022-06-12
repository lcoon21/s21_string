#include "s21_string.h"

size_t s21_strspn(const char *str1, const char *str2) {
    const char *first;
    const char *second;
    size_t count = 0;

    for (first = str1; *first != '\0'; ++first) {
        for (second = str2; *second != '\0'; ++second) {
            if (*first == *second) break;
        }
        if (*second == '\0') return count;
        ++count;
    }
    return count;
}
