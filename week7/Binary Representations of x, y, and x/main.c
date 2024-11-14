#include <stdio.h>

int main() {
  short int bitString[100] = {0};

  int n;
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    int bit;
    scanf("%1d", &bit);
    bitString[i] = bit;
  }

  int go = 1;

  for (int i = 1; i <= 32 && go; i++) {
    unsigned int x = 0;
    for (int j = 0; j <= i; j++) {
      x = x << 1 ^ bitString[j];
    }

    for (int j = 1; j <= 32 && i + j <= n && go; j++) {
      unsigned int y = 0;
      for (int k = 0; k < j; k++) {
        y = y << 1 ^ bitString[i + k];
      }

      if (y > x) {
        break;
      }

      unsigned int z = 0;
      for (int k = i + j; k < n; k++) {
        z = z << 1 ^ bitString[k];
      }

      if (x + y == z){
        printf("%d,%d,%d\n", x, y, z);
        go = 0;
      }
    }
  }

  return 0;
}