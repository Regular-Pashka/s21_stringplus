
#include <string.h>

#include "./s21_string.h"
// ЗАЙДИ НА ДЕВЕЛОП ЗАПУЛЬ ИЗМЕНЕНИЯ ИЗ ДЕВЕЛОПА ЗАЛЕЙ НА ЛОКАЛЬНЫЙ ДЕВЕЛОП ИЗМЕНЕНИЯ ИЗ СТЕЙСИ И ЗАПУШЬ ЭТОТ ДЕВЕЛОП НА УДАЛЕННЫЙ
int main() {
  // char string[50] = "     NI C  HEG ONEP ROI ZOS H   LO";
  // char string2[50] = " ";
  char string[50] = "SampleText";
  // char string2[50] = "A *****";
  // char string2[20];
  // memset(string, 'A', 15);
  // memset(string2, 'C', 15);
  // printf("%s", s21_strchr(string, '\0'));

  // printf("%s", (char *)s21_trim(string, string2));
  // printf("%s\n", (char *)s21_to_upper(string));
  // printf("%s\n", string2);
  // printf("%s", (char *)s21_insert(string, string2, -1));
  // s21_memset(string, 'B', 22);
  // s21_strncat(string, string2, 20);
  //   strncat(string, string2, 20);
  //   printf("%s\n", string);
  // printf("%s\n", string2);
  return 0;
}

// Паша: memset strncat strchr

// void *memset(void *str, int c, size_t n)
// Копирует символ c (беззнаковый тип) в первые n символов строки, на которую
// указывает аргумент str.

// char *strncat(char *dest, const char *src, size_t n)
// Добавляет строку, на которую указывает src, в конец строки, на которую
// указывает dest, длиной до n символов.

// char *strchr(const char *str, int c)
// Выполняет поиск первого вхождения символа c (беззнаковый тип) в строке, на
// которую указывает аргумент str.как сделать скрин на маке