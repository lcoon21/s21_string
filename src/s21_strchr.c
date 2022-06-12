#include "s21_string.h"

char *s21_strchr(const char *str, int c) {
    char *result = s21_NULL;
    while (*str++) {
        if (*str == c) {
            result = (char *)str;
            break;
        }
    }
    return result;
}
