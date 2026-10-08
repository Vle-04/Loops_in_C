#include <stdio.h>

void initialisedValue(int*);
void printMultipleTable(int);

int main() {
  int number = 0;
  initialisedValue(&number);
  printMultipleTable(number);

  return 0;
};

void initialisedValue(int* num) {
  printf("Please input a number:\n");
  scanf("%d", num);
  return;
};

void printMultipleTable(int num) {
  for (int i = 1; i <= 10; ++i) {
    printf("%d * %d = %d\n", i, num, i * num);
  }
  return;
};
