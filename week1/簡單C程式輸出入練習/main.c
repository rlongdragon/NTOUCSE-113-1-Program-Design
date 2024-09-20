#include <stdio.h>


int main() {
  int m, n;
  int cars;
  scanf("%d %d", &m, &n);

  if ((m % n) != 0) {
    printf("%d\n", (m / n) + 1);
  } else {
    printf("%d\n", m / n);
  }
  
  return 0;
}