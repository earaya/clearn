/* Converts a hexadecimal string to its integer representation. */
#include <stdio.h>

static const long hextable[] = {
   [0 ... 255] = -1,
   ['0'] = 0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
   ['A'] = 10, 11, 12, 13, 14, 15,
   ['a'] = 10, 11, 12, 13, 14, 15
};


long htoi(char s[]);

main()
{
  printf("%ld", htoi("3F"));
}

long htoi(char s[])
{
  long ret = 0;
  while (*s && ret >= 0) {
    ret = (ret << 4) | hextable[*s++];
  }
  return ret;
}