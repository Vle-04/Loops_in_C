#include <stdio.h>

int addDigitsOfNumber(int);

int main() {
  printf("Please input the number!\n");

  int number = 0;
  scanf("%d", &number);

  printf("The number is: %d\n", number);

  int result = addDigitsOfNumber(number);
  printf("The result is: %d\n", result);

  return 0;
};

int addDigitsOfNumber(int num) {
  int tmp = num;
  int result = 0;

  while (tmp != 0) {
    int dig = tmp % 10;
    result += dig;
    tmp /= 10;
  }

  return result;
};




