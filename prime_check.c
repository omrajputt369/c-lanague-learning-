#include <stdbool.h>
#include <stdio.h>

int main() {
  int n, i;
  bool isPrime = true;
  printf("Enter a positive integer: ");
  scanf("%d", &n);

  if (n == 0 || n == 1) {
    isPrime = false;
  } else {
    for (i = 2; i <= n / 2; ++i) {
      if (n % i == 0) {
        isPrime = false;
        break;
      }
    }
  }

  if (isPrime)
    printf("%d is a prime number.\n", n);
  else
    printf("%d is not a prime number.\n", n);

  return 0;
}
