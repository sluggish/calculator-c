// what the cow, learn c
// #TuxGang Zimzy x Kasey Calculator #CDemons #Rich #ACG #BLESSED #CertifiedProgrammer :100:

#include <stdio.h>

void addition(int number1, int number2) {
    printf("%d + %d = %d", number1, number2, number1 + number2);
}

void subtraction(int number1, int number2) {
    printf("%d - %d = %d", number1, number2, number1 - number2);
}

void multiplication(int number1, int number2) {
    printf("%d * %d = %d", number1, number2, number1 * number2);
}

void division(int number1, int number2) {
      if(!number2) {
        puts("Cannot divide by 0!");
          return;
    }
  
      printf("%d / %d = %d", number1, number2, (int) (number1 / number2));
}

int main(void) {  
      puts("\n\nCalculator. Meow.");
  
      char option = 0;
      printf("Pick operation to use -> ");
      scanf("%c", &option);

      int number1 = 0, number2 = 0;
      printf("Please enter the first number you would like to use ->\t ");
      scanf("%d", &number1);

      printf("Please enter the second number you would like to use ->\t");
      scanf("%d", &number2);

      switch(option) {
          case '+': addition(number1, number2);       break;
          case '-': subtraction(number1, number2);    break;
          case '*': multiplication(number1, number2); break;
          case '/': division(number1, number2);       break;
          default:  puts("Invalid operation!");       break;
      }
  
      return 0;
}
