#include "s21_string.h"

void input_symbol(char *src, const char *str, s21_size_t src_index,
                  s21_size_t str_index);

void *s21_insert(const char *src, const char *str, s21_size_t start_index) {
  int is_error = 0;
  char *result = s21_NULL;
  if (src && str && start_index <= (s21_strlen(src) + s21_strlen(str))) {
    result =
        (char *)calloc(s21_strlen(src) + s21_strlen(str) + 1, sizeof(char));
    if (result == s21_NULL) {
      is_error = 1;
    }
    s21_size_t result_index = start_index;
    s21_strcpy(result, (char *)src);
    for (s21_size_t i = 0; i < s21_strlen(str); i++, result_index++) {
      input_symbol(result, str, result_index, i);
    }
  } else {
    is_error = 1;
  }
  return is_error ? s21_NULL : (void *)result;
}

void input_symbol(char *src, const char *str, s21_size_t src_index,
                  s21_size_t str_index) {
  s21_size_t src_length = s21_strlen(src);
  for (s21_size_t i = src_length; i >= src_index; i--) {
    src[i + 1] = src[i];
  }
  src[src_index] = str[str_index];
}
