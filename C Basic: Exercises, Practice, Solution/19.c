#include <stdio.h>

/* 19. Validate four integers based on conditions

1. Write a C program that accepts 4 integers p, q, r, s from the user.

2. where q, r and s are positive and p is even.

If q is greater than r and s is greater than p and if the sum of r and s is greater than the sum of p and q print "Correct values", otherwise print "Wrong values".

Test Data :
Input the second integer: 35
Input the third integer: 15
Input the fourth integer: 46
Expected Output:
Wrong values
Click me to see the solution
*/

int main(int argc, char *argv[]){
  int p,q,r,s;
  
  printf("Input the first integer: ");
  scanf("%d", &p);
  if (p<0){
    printf("ERROR: INT should be positive\n");
    return 65;
  }

  printf("Input the second integer: ");
  scanf("%d", &q);
  if (q<0){
    printf("ERROR: INT should be positive\n");
    return 65;
  }

  printf("Input the third integer: ");
  scanf("%d", &r);
  if (r<0){
    printf("ERROR: INT should be positive\n");
    return 65;
  }

  printf("Input the fourth integer: ");
  scanf("%d", &s);
  if ((s%2)!=0) {
    printf("ERROR: INT should be even\n");
    return 65;
  }

  if ((q>r)&(s>p)&((r+s)>(p+q)))
      {
	printf("Correct values\n");
	return 0;
      }else{
	printf("Wrong values\n");
	return 1;
      }

  return 0;
}
