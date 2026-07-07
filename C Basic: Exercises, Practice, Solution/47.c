#include <stdio.h>
/*
7. Find all divisors of a given integer

Write a C program that finds all the divisors of an integer.
Test Data:
Input an integer: 45
Expected Output:
All the divisor of 45 are:
1
3
5
9
15
45 
 */

int main(int argc, char *argv[]){

  int number;
  
  printf("Input an integer: ");
  scanf("%d", &number);

  for (int i=1;i<=number;i++){
    if((number%i)==0){
      printf("%d\n",i);
    }
  }
  
  return 0;
}
