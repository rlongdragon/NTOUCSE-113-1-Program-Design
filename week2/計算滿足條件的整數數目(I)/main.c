#include <math.h>
#include <stdio.h>

int main() {
  double a, b;
  double left, right;

  while (scanf("%lf%lf", &a, &b) != EOF) {
    left = log(a);
    right = log(b);

    printf("%d\n", (int)(floor(right * 200) - ceil(left * 200) + 1));
  }

  return 0;
}

/**
 * 解題報告
 *
 * 1. 由 y=log_a x <=> a^y=x 可以得到下面結論
 *    exp(x) = e^x = n
 *    要由 n 得到 x： x=log_e n
 *
 * 2. 要在兩個小數點內取得之中的整數數量
 *    |--1--2--3--4-|
 *   0.2           4.6
 *    左界left要取最小整數 >= left
 *    右界right要去最大正數 <= right
 *    分別使用 ceil() 以及 floor()
 *    最後加上開頭，所以再 +1
 */