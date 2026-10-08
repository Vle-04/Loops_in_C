#include <stdio.h>

void initialisedValue(int*);
int sumOfAllNumbers(int);

int main() {
  int number = 0;
  initialisedValue(&number);
  int result = sumOfAllNumbers(number);
  printf("The sum of all numbers is %d\n", result);
  
  return 0;
};

void initialisedValue(int* num) {
  printf("Please input a number:\n");
  scanf("%d", num);
  return;
};

int sumOfAllNumbers(int num) {
  int sum = 0;
  for (int i = 1; i <= num; ++i) {
    sum += i;
  }

  return sum;
};
