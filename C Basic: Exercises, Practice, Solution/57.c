#include <stdio.h>

/*
57. Reverse the digits of a number

Write a C program to reverse and print a given number.
Input a number:
The original number = 234
The reverse of the said number = 432
 */

int main(int argc, char *argv[]){
  int number=0;
  int new=0;

  printf("Input a number: ");
  scanf("%d", &number);

  printf("The original number: %d\n", number);

  while ( number > 0)
    {
      new = new*10+number%10;
      number = (number-(number%10))/10;
    }

  printf("The reversed number: %d\n", new);

  return 0;
}
