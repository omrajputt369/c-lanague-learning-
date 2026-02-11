#include <stdio.h>

int main() {
  float P, R, T, SI;
  printf("Enter principal amount: ");
  scanf("%f", &P);
  printf("Enter rate of interest: ");
  scanf("%f", &R);
  printf("Enter time (in years): ");
  scanf("%f", &T);

  SI = (P * R * T) / 100;

  printf("Simple Interest = %.2f\n", SI);
  return 0;
}
