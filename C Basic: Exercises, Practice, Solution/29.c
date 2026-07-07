#include <stdio.h>
/*
29. Sum all odd values among 5 inputs

Write a C program that read 5 numbers and sum of all odd values between them.
 */

int main(){

  int array[5];
  int len,sum=0;
  
  printf("Input the first number: ");
  scanf("%d",&array[0]);
  printf("Input the second number: ");
  scanf("%d",&array[1]);
  printf("Input the third number: ");
  scanf("%d",&array[2]);
  printf("Input the fourth number: ");
  scanf("%d",&array[3]);
  printf("Input the fifth number: ");
  scanf("%d",&array[4]);

  for (len=5;len>0;len--)
    {
      if((array[len-1]%2)!=0){
	sum +=array[len-1];
      }
    }
  printf("Sum of all odd values: %d\n", sum);
  
  return 0;
}
