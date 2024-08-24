#include "s21_string.h"

int s21_memcmp(const void *arr1, const void *arr2, s21_size_t size) {
  unsigned char *temp1 = (unsigned char *)arr1;
  unsigned char *temp2 = (unsigned char *)arr2;
  for (s21_size_t i = 0; i < size; ++i) {
    if (temp1[i] != temp2[i]) {
      return temp1[i] - temp2[i];
    }
  }
  return 0;
}
