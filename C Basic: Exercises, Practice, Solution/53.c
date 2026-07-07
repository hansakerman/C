#include <stdio.h>
/* 53. Calculate simple interest (P, R, T)

Write a C program that accepts the principle, rate of interest, and
time and calculates simple interest.

Test Data:
Input Data: p = 10000, r = 10% , t = 12 year
Expected Output:
Input principle, Rate of interest & time to find simple interest:
Simple interest = 12000
Click me to see the solution
 */

int main(int argc, char *argv[]){

  int p=10000;
  float r=10;
  int t=12;

  float simple=p*(r/100)*12;

  printf("Simple interrest = %d \n",(int)simple);

  return 0;
}
