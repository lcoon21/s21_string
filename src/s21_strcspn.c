#include "s21_string.h"

size_t s21_strcspn(const char *str1, const char *str2) {
    const char *tmp1 = str1;
    size_t count1 = 0;
    size_t count2 = s21_strlen(str1);
    while (*str2 != '\0') {
        while (*str1 != '\0') {
            if (*str1 != *str2) {
                str1++;
                count1++;
            } else {
                break;
            }
        }
        str2++;
        if (count1 <= count2) {
            count2 = count1;
            count1 = 0;
        }
        count1 = 0;
        str1 = tmp1;
    }
    return count2;
}
