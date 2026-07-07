#include <stdio.h>
#include <stdarg.h>

int main(int argc, char *argv[]){

  // Stack variables
  int weight1;
  int no1;
  int weight2;
  int no2;

  printf("Weight - Item1: ");
  scanf("%d", &weight1);
  printf("No. of item1: ");
  scanf("%d", &no1);
  printf("Weight - Item2: ");
  scanf("%d", &weight2);
  printf("No. of item2: ");
  scanf("%d", &no2);

  int total_weight = weight1*no1+weight2*no2;
  int no_items = no1+no2;
  float avg = (float) total_weight/no_items;
  printf("Average Value = %f\n",avg);
}

/* Write a C program that accepts two item's weight and number of
   purchases (floating point values) and calculates their average
   value.

   Test Data :

   Weight - Item2: 25
   No. of item2: 4
   Expected Output:
   Average Value = 19.444444*/

    
