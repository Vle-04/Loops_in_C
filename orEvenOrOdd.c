#include <stdio.h>

void is_Odd_Even(int);

int main() {
  printf("Please input the number!\n");

  int number = 0;
  scanf("%d", &number);

  is_Odd_Even(number);
  
  return 0;
};

void is_Odd_Even(int num) {
  if (num & 1) {
    printf("%d The number is Odd!\n", num);
  } else {
    printf("%d The number is Even!\n", num);
  }

  return;
}
