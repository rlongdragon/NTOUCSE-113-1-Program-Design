#include <stdio.h>
#include <math.h>

int main() {
  int ans;
  int n;
  int x[9], y[9];

  while (scanf("%d", &n) != EOF) {
    ans = 0;

    for (int i = 0; i < n; i++) {
      scanf("%1d", &x[i]);
    }

    for (int i = 0; i < n; i++) {
      scanf("%1d", &y[i]);
    }

    for (int i = 0; i < n; i++) {
      if (fabs(x[i]-y[i])>5) {
        ans += -fabs(x[i]-y[i]) + 10;
      } else {
        ans += fabs(x[i]-y[i]);
      }
    }

    printf("%d\n", ans);
  }

  return 0;
}