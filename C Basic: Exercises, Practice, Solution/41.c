#include <stdio.h>
/*
41. Print n lines of 3 consecutive numbers starting from 1

Write a C program to print 3 numbers on a line, starting with 1 and printing n lines. Accept the number of lines (n, integer) from the user.
Test Data :
Input number of lines: 5
Expected Output:
1 2 3
4 5 6
7 8 9
10 11 12
13 14 15 
 */

int main(int argc, char *argv[]){
  int lines;
  
  printf("Number of lines: ");
  scanf("%d", &lines);

  for(int i=0;i<lines;i++){
    printf("%d %d %d\n",i*3+1,i*3+2,i*3+3);
  }  
  return 0;
}
