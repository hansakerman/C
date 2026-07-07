#include <stdio.h>
/*
31. Check if an integer is positive/negative and even/odd

Write a C program to check whether a given integer is positive even, negative even, positive odd or negative odd. Print even if the number is 0.
Test Data :
Input an integer: 13
Expected Output:
Positive Odd 
 */

int main(int argc, char *argv[]){

  int number=0;

  printf("Input an integer: ");
  scanf("%d", &number);

  (number > 0) ? printf("Positive ") : printf("Negative ");
  ((number%2)==0) ? printf("Even") : printf("Odd");
  printf("\n");
  
  return 0;
}
