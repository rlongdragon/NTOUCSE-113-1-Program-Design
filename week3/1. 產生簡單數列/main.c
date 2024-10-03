#include <stdio.h>

int main() {
  int m, n;
  int i;
  while (scanf("%d%d", &m, &n) != EOF) {
    for (i = -m; i < 0; i += n) {
      printf("%d ", i);
    }

    printf("0 ");

    for (i = m % n ? m % n : n; m >= i; i += n) {
      if (m - i) {
        printf("%d ", i);
        continue;
      }
      printf("%d", i);
    }
    printf("\n");
  }

  return 0;
}