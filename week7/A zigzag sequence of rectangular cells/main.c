#include <stdio.h>

long long int Sn(long long int n) { return ((n + 1) * n) / 2; }

long long int getValue(long long int m, long long int n) {
  long long int level = m + n - 1;

  if (level % 2) {
    return Sn(level) - n + 1;
  } else {
    return Sn(level - 1) + n;
  }
}

int main() {
  long long int num;
  while (scanf("%lld", &num) != EOF) {
    long long int temp = num;
    long long int level;
    for (level = 0; Sn(level) < num; level++);

    long long int ans[4] = {0};
    int counter = 0;

    long long int m, n;
    if (level % 2) {
      n = Sn(level) - num + 1;
      m = level - n + 1;

      if (n > 1) {
        ans[counter] = getValue(m, n - 1);
        counter++;
      }
      if (m > 1) {
        ans[counter] = getValue(m - 1, n);
        counter++;
      }
      ans[counter] = getValue(m + 1, n);
      counter++;
      ans[counter] = getValue(m, n + 1);
      counter++;

    } else {
      n = num - Sn(level - 1);
      m = level - n + 1;

      if (m > 1) {
        ans[counter] = getValue(m - 1, n);
        counter++;
      }
      if (n > 1) {
        ans[counter] = getValue(m, n - 1);
        ;
        counter++;
      }
      ans[counter] = getValue(m, n + 1);
      counter++;
      ans[counter] = getValue(m + 1, n);
      counter++;
    }

    printf("%lld", ans[0]);
    for (int i = 1; i < counter; i++) printf(",%lld", ans[i]);
    printf("\n");
  }

  return 0;
}