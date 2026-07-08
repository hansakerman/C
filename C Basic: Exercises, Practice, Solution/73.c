#include <stdio.h>
/*
73. Check if the first integer is a multiple of the second

Write a C program that reads two integers and checks whether the first integer is a multiple of the second integer.
Sample Input: 9 3
Sample Output:
Input the first integer : Input the second integer:
9 is a multiple of 3.
 */

int main(int argc, char *argv[]){

  int a,b;

  printf("Input first integer a: ");
  scanf("%d", &a);
  printf("Input second integer b: ");
  scanf("%d", &b);

  if ((a%b)==0){

    printf("b is a divider of a: b|a\n");
  }
  
  return 0;
}
