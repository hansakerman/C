#include <stdio.h>

/* 5. Compute rectangle perimeter and area Write a C program to
compute the perimeter and area of a rectangle with a height of 7
inches and width of 5 inches.  Expected Output: Perimeter of the
rectangle = 24 inches Area of the rectangle = 35 square inches
*/

int main(int argc, char *argv[]){

  int height=7;
  int width=5;

  printf("Perimeter of the rectangle = %d inches \n", (height+width)*2);
  printf("Area of the rectangle = %d inches \n", height*width);

}
