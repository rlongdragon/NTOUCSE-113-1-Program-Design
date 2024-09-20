#include <stdio.h>

int main() {
  float weight, height;
  float BMI;
  
  scanf("%f %f", &weight, &height);

  BMI = weight/(height*height);

  printf("%.2f\n", BMI);

  return 0;
}