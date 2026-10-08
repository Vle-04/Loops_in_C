#include <stdio.h>

void initialisedValue(int*);
void printingNumbers(int);

int main() {
  int number = 0;
  initialisedValue(&number);
  printingNumbers(number);

  return 0;
};

void initialisedValue(int* num) {
  printf("Please input a number:\n");
  scanf("%d", num);
  return;
};

void printingNumbers(int num) {
  for (int i = 1; i <= num; ++i) {
    printf("%d\n", i);
  }

  return;
}


