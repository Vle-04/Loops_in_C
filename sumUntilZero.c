#include <stdio.h>

int whileNumberIsNotZero(int);

int main() {
  int number = 0;
  int result = whileNumberIsNotZero(number);
  printf("The sum is: %d\n", result); 

  return 0;
};

int whileNumberIsNotZero(int num) {
  int sum = 0;

  do {
    printf("Please input a number:\n");
    scanf("%d", &num);
    sum += num;
  } while (num != 0);

  return sum;
};
