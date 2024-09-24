#include <stdio.h>

int main() {
  int numOfInput;
  int n, m;
  int i;
  int temp = 1;

  scanf("%d", &numOfInput);

  for (i = 0; i < numOfInput; i++) {
    scanf("%d %d", &n, &m);

    while (n > 0) {
      temp *= n;
      n--;
    }

    printf("%d\n", temp % m);

    temp = 1;
  }
       
  return 0;
}