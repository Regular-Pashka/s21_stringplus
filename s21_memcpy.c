#include "s21_string.h"

void *s21_memcpy(void *dest, const void *src, s21_size_t size) {
  unsigned char *ptr1 = (unsigned char *)dest;
  unsigned char *ptr2 = (unsigned char *)src;
  for (s21_size_t i = 0; i < size; i++) {
    *ptr1 = *ptr2;
    ptr1++;
    ptr2++;
  }
  return dest;
}