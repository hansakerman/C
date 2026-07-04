#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int x;

int main (int argc, char *argv[])
{
  int r = fork();
  if ( r < 0 ){    
    //Fork forked up
    fprintf(stderr, "Fork failed");
    exit(1);
  } else if ( r == 0 ) {  // return is zero if child
    printf("Hello I am the child.\n");
  } else {
    sleep(1);
    printf("Goodbye, I am the parent.\n");
  }
  
  return 0;
}
  
