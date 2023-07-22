// what the cow, learn c
// #TuxGang Zimzy x Kasey Calculator #CDemons #Rich #ACG #BLESSED #CertifiedProgrammer :100:
#include <stdio.h>

int Addition(number1, number2) {
  int sum = number1 + number2;
  printf("%d + %d = %d", number1, number2, sum);
}

int Subtraction(number1, number2) {
  int sum = number1 - number2;
  printf("%d - %d = %d", number1, number2, sum);
}

int Multiplication(number1, number2) {
  int sum = number1 * number2;
  printf("%d * %d = %d", number1, number2, sum);
}

int Division(number1, number2) {
  int sum = number1 / number2;
  printf("%d / %d = %d", number1, number2, sum);
}

int main(void) {
  printf("\n\nCalculator. Meow.\n\nPick an option.\n\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
  
  int option;
  printf("Pick operation to use -> ");
  scanf("%d", &option);

  int number1, number2;
  printf("Please enter the first number you would like to use ->\t ");
  scanf("%d", &number1);

  printf("Please enter the second number you would like to use ->\t");
  scanf("%d", &number2);

  if (option == 1) {
    Addition(number1, number2);
  } else if (option == 2) {
    Subtraction(number1, number2);
  } else if (option == 3) {
    Multiplication(number1, number2);
  } else if (option == 4) {
    Division(number1, number2);
  }
  return 0;
}
