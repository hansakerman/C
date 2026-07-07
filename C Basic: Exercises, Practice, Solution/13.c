#include <stdio.h>

int main(int argc, char *argv[]){
  
  int x,y,z,highest;
  printf("Input the first integer: ");
  scanf("%d",&x);
  printf("Input the second integer: ");
  scanf("%d",&y);
  printf("Input the third integer: ");
  scanf("%d",&z);

  if (x>y){
    highest=x;
  } else {
    highest=y;}

  if (z>highest) highest=z;
    
  printf("Maximum value of three integers: %d\n", highest);
  return 0;
}



/*13. Find the maximum of three integers

Write a C program that accepts three integers and finds the maximum of three.
Test Data :
Input the first integer: 25
Input the second integer: 35
Input the third integer: 15
Expected Output:
Maximum value of three integers: 35 */
