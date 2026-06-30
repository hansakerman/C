#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int x;

int main (int argc, char *argv[])
{
  x = 100;
  int r = fork();
  if ( r < 0 ){    
    //Fork forked up
    fprintf(stderr, "Fork failed");
    exit(1);
  } else if ( r == 0 ) {  // return is zero if child
    printf("child = %d \n",x);
  } else {
      printf("parent = %d \n",x);
  }
  
  return 0;
}
  
