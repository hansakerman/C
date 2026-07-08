#include <stdio.h>
#include <math.h>
/*
67. Evaluate y=xn

Write a C program to evaluate the equation y=xn when n is a non-negative integer.
Input the values of x and n: 256
x=256.000000; n=0;
x to power n=1.000000
Click me to see the solution
 */

int main(int argc, char *argv[]){

  int x,n,result;
  printf("Calculate y when y=x^n\n");
  printf("Enter x and n separeted with space: ");
  scanf("%d %d", &x, &n);
  
  result = pow(x,n);
  printf("%d\n",result);
  return 0;
}
