#include <stdio.h>

int main() {
  int m, n;
  char c;
  int scanfReturn;
  int i;
  while (1) {
    scanfReturn = scanf("%d%c", &m, &c);
    printf("%d\n", scanfReturn);
    // for (i = -m; i < 0; i += n) {
    //   printf("%d ", i);
    // }

    // printf("0 ");

    // for (i = m % n ? m % n : n; m >= i; i += n) {
    //   if (m - i) {
    //     printf("%d ", i);
    //     continue;
    //   }
    //   printf("%d ", i);
    // }
    // printf("\n");
  }

  return 0;
}