#include <stdio.h>
/*
37. Determine quadrant of Cartesian coordinates (x, y)

Write a C program to read the coordinates (x, y) (in the Cartesian system) and find the quadrant to which it belongs (Quadrant -I, Quadrant -II, Quadrant -III, Quadrant -IV).
Note: A Cartesian coordinate system is a coordinate system that specifies each point uniquely in a plane by a pair of numerical coordinates.
These are often numbered from 1st to 4th and denoted by Roman numerals: I (where the signs of the (x,y) coordinates are I(+,+), II (−,+), III (−,−), and IV (+,−).
Test Data :
Input the Coordinate(x,y):
x: 25
y: 15
Expected Output:
Quadrant-I(+,+) 
 */

int main(int argc, char *argv[]){

  int x,y;
  printf("Input the Coordinate(x,y): ");
  scanf("%d,%d",&x,&y);

  (x>0)?
    (y>0)?printf("Q1"):printf("Q4"):
    (y>0)?printf("Q2"):printf("Q3");

  return 0;
}
