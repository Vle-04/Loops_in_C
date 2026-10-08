#include <stdio.h>

void initialisedValue(int*);
void printAllEvenNumbers(int);

int main() {
  int number = 0;
  initialisedValue(&number);
  printAllEvenNumbers(number);
  
  return 0;
};

void initialisedValue(int* num) {
  printf("Please input a number:\n");
  scanf("%d", num);
};

void printAllEvenNumbers(int num) {
  for (int i = 1; i <= num; ++i) {
    if ((i & 1) == 0) {
      printf("%d\n", i);
    }
  }

  return;
};
