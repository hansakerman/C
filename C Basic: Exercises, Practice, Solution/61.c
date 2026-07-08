#include <stdio.h>
#include <math.h>

/*
61. Calculate and display sin⁡(1x)\sin(\frac{1}{x})sin(x1) for a real
number xxx

Write a C program that accepts a real number x and prints out the
corresponding value of sin(1/x) using 4-decimal places.

Input value of x: .6235
Value of sin(1/x) is 0.9995

*/

int main(int argc, char *argv[]){

  double x;
  printf("Input value of x: ");
  scanf("%lf", &x);

  printf("%lf\n", (double) sin(1/x));	
  
  return 0;
}
