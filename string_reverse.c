#include <stdio.h>
#include <string.h>

int main() {
  char s[100], temp;
  int i, j;
  printf("Enter a string: ");
  scanf("%s", s);

  i = 0;
  j = strlen(s) - 1;

  while (i < j) {
    temp = s[i];
    s[i] = s[j];
    s[j] = temp;
    i++;
    j--;
  }

  printf("Reverse string: %s\n", s);
  return 0;
}
