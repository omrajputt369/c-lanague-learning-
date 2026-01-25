#include <stdio.h>

int main() {
  char name[30];
  int age;

  printf("Enter name: ");
  scanf("%29s", name);

  printf("Enter age: ");
  scanf("%d", &age);

  printf("Hello %s, age = %d\n", name, age);
  return 0;
}