#include <stdio.h>


void swapTwoNumbers(int*, int*);

int main () {
  printf("Please input two numbers\n");

  int firstNumber = 0;
  int secondNumber = 0;

  scanf("%d", &firstNumber);
  scanf("%d", &secondNumber);

  printf("The first number before swapping = %d \n", firstNumber);
  printf("The second number before swapping = %d \n", secondNumber);

  swapTwoNumbers(&firstNumber, &secondNumber);

  printf("The first number after swapping = %d \n", firstNumber);
  printf("The second number after swapping = %d \n", secondNumber);

  return 0;
};

void swapTwoNumbers(int* num1, int* num2) {
  int tmp = *num1;
  *num1 = *num2;
  *num2 = tmp;
};
