#include <stdio.h>

int main() {
  int rows = 5;
  char ch = 'A';

  printf("Pattern 1: Simple Alphabet Triangle\n");
  printf("===================================\n");
  // Pattern 1: Simple alphabet triangle
  for (int i = 1; i <= rows; i++) {
    for (int j = 1; j <= i; j++) {
      printf("%c ", ch);
      ch++;
    }
    printf("\n");
  }

  printf("\n\nPattern 2: Repeating Alphabet Triangle\n");
  printf("======================================\n");
  // Pattern 2: Repeating alphabet in each row
  for (int i = 1; i <= rows; i++) {
    ch = 'A';
    for (int j = 1; j <= i; j++) {
      printf("%c ", ch);
      ch++;
    }
    printf("\n");
  }

  printf("\n\nPattern 3: Same Letter Triangle\n");
  printf("================================\n");
  // Pattern 3: Same letter in each row
  ch = 'A';
  for (int i = 1; i <= rows; i++) {
    for (int j = 1; j <= i; j++) {
      printf("%c ", ch);
    }
    ch++;
    printf("\n");
  }

  printf("\n\nPattern 4: Alphabet Pyramid\n");
  printf("===========================\n");
  // Pattern 4: Alphabet pyramid
  for (int i = 1; i <= rows; i++) {
    // Print spaces
    for (int j = 1; j <= rows - i; j++) {
      printf("  ");
    }
    // Print alphabets
    ch = 'A';
    for (int j = 1; j <= i; j++) {
      printf("%c ", ch);
      ch++;
    }
    printf("\n");
  }

  return 0;
}
