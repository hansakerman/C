#include <stdio.h>
/*
23. Check for valid triangle and calculate perimeter

Write a C program that reads three floating-point values and checks if it is possible to make a triangle with them. Determine the perimeter of the triangle if the given values are valid.
Test Data :
Input the first number: 25
Input the second number: 15
Input the third number: 35
Expected Output:
Perimeter = 75.0 
 */
int main(int argc, char *argv[]){
  float a,b,c;
  printf("(Input the first number: ");
  scanf("%f", &a);
  printf("Input the second number: ");
  scanf("%f", &b);
  printf("Input the third number: ");
  scanf("%f", &c);

  // Det är väl att se till att ingen sida är längre än summan av de andra
  // Is it possible to create a tringle?
  if ((a<(b+c)&&b<(a+c)&&c<(b+c)))
    {
      printf("Perimeter: %f", a+b+c);
    }
  return 0;
}
