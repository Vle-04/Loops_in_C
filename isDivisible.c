#include <stdio.h>

void isDivisible(int);

int main() {
  printf("Please input the number!\n");

  int number = 0;
  scanf("%d", &number);

  printf("The number is: %d\n", number);

  isDivisible(number);

  return 0;
};

void isDivisible(int num) {
  if (num % 3 == 0 && num % 5 == 0) {
    printf("Yes! The number is divisible by both 3 and 5\n");
  } else {
    printf("No! The number isn't divisible by both 3 and 5\n");
  }

  return;
};
