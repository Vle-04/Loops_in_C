#include <stdio.h>

int getTheLastDigit(int);

int main () {
  printf("Please input the number!\n");

  int number = 0;
  scanf("%d", &number);

  int result = getTheLastDigit(number);
  printf("The last digit of number is: %d \n", result);

  return 0;

};

int getTheLastDigit(int num) {
  return num % 10;
};
