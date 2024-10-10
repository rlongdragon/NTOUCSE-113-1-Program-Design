#include <math.h>
#include <stdio.h>

int main() {
  int n;

  while (scanf("%d", &n) != EOF) {
    printf("diamond:%d\n", n);

    for (int i = 0; i < n; i++) {
      // --*--*--
      // A | B| C

      // A
      for (int j = 0; j < fabs(i - n / 2); j++) {
        printf("-");
      }
      printf("*");

      // B
      for (int j = 0; j < (-fabs(i - n / 2) + n / 2) * 2 - 1; j++) {
        printf("-");
        if (j == (-fabs(i - n / 2) + n / 2) * 2 - 2) {
          printf("*");
        }
      }

      // C
      for (int j = 0; j < fabs(i - n / 2); j++) {
        printf("-");
      }

      printf("\n");
    }
  }

  return 0;
}