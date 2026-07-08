#include <stdio.h>
/*
83. Count occurrences of the digit 3 in a number

Write a C program that reads an integer (7 digits or fewer) and counts the number of 3s in the given number.
Sample Input: 538453
Sample Output:

Input a number:
The number of threes in the said number is 2

 */

int main(int argc, char *argv[]){

  int number;
  int threes=0;
  
  printf("Give a less than 7 digit integer: ");
  scanf("%7d", &number);
  printf("Number stored: %d\n", number);

  while (number>0){
    if(number%10==3){threes++;}
    number=number/10;
    printf("%d",number);
  }
  printf("The number of threes are: %d\n",threes);
  
  return 0;
}
