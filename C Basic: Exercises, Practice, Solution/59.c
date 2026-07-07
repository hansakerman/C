#include <stdio.h>
/*
 Calculate the sum of the series 1+1/2+1/3+...+1/n

Write a C program to display the sum of series 1 + 1/2 + 1/3 + ………. + 1/n. 
 */

int main(int argc, char *argv[]){

  int n=1;
  float sum=0;
  
  printf("Give n of the harmonic geometric sum Σ(1/n): ");
  scanf("%d", &n);

  for (int i=1;i<n;i++){
    sum = sum + (float) 1/i;
  }

  printf("%f\n", sum);
  return 0;
}
