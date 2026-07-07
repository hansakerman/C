#include <stdio.h>
/*
43. Print p lines of q numbers in sequence starting from 1

Write a C program that reads two integers p and q, prints p number of lines in a sequence of 1 to b in a line.
Test Data :

Number of characters in a line: 6
Expected Output:
1 2 3 4 5 6
7 8 9 10 11 12
13 14 15 16 17 18
19 20 21 22 23 24
25 26 27 28 29 30
 */

int main(int argc, char *argv[]){
  int lines, rows=6;

  printf("Input number of lines: ");
  scanf("%d",&lines);

  for (int i=0;i<lines; i++){
    for (int j=1;j<=rows; j++){
      printf("%d ", i*6+j);
    }
    printf("\n"); 
  }

  return 0;
}
