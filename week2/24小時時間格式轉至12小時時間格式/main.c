#include <stdio.h>

int main() {
  int n;
  int hour, minute, second;
  int i = 0;

  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    scanf("%d:%d:%d", &hour, &minute, &second);

    if (hour == 0) {
      hour = 12;
      printf("%02d:%02d:%02d a.m.\n", hour, minute, second);
    } else if (hour == 12) {
      printf("%02d:%02d:%02d p.m.\n", hour, minute, second);
    } else if (hour > 12) {
      hour -= 12;
      printf("%02d:%02d:%02d p.m.\n", hour, minute, second);
    } else {
      printf("%02d:%02d:%02d a.m.\n", hour, minute, second);
    }
  }

  return 0;
}