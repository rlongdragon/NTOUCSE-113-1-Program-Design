#include <stdio.h>

int main() {
  int m, n, num;
  int isValid, isEnd;
  char c;
  int i;
  while (scanf("%d%c", &m, &c) == 2) {
    if (c == '\n') {
      if (m == 0) {
        printf("valid\n");
        continue;
      } else {
        printf("invalid\n");
        continue;
      }
    }

    scanf("%d%c", &num, &c);
    if (c == '\n') {
      printf("invalid\n");
      continue;
    }

    n = num - m;
    isValid = 1;
    isEnd = 0;

    for (i = m + n + n; 0 > i; i += n) {
      scanf("%d%c", &num, &c);
      if (c == '\n') {
        printf("invalid\n");
        isValid = 0;
        isEnd = 1;
        break;
      }

      if (num != i) {
        printf("invalid\n");
        isValid = 0;
        break;
      }
    }

    scanf("%d%c", &num, &c);
    if (num != 0) {
      printf("invalid\n");
      isValid = 0;
    }

    for (i = -m % n ? -m % n : n; -m >= i && isValid; i += n) {
      scanf("%d%c", &num, &c);
      if (c == '\n' && num != -m) {
        printf("invalid\n");
        isValid = 0;
        isEnd = 1;
        break;
      }

      if (num != i) {
        printf("invalid\n");
        isValid = 0;
        break;
      }
    }

    if (isValid == 0) {
      while (isEnd == 0) {
        scanf("%d%c", &num, &c);
        if (c == '\n') {
          isEnd = 1;
          break;
        }
      }
    }

    if (isValid == 1) {
      printf("valid\n");
    }
  }

  return 0;
}