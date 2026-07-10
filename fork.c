#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// added som sleep() to observe the behaviour from the OS.

int main (int argc, char *argv[])
{
  printf("hello world (pid:%d)\n", (int) getpid());
  int rc = fork(); // Create a new process
  if ( rc < 0) {
    // fork failed. Exit with error
    fprintf(stderr, "Fork failed\n");
    exit(1);
  } else if ( rc == 0 ) {
    //Child (new process)
    printf("hello, I am a child process (pid:%d)\n", (int) getpid());
    sleep(1);
  } else {
    // parent goes down this path (original process)
    printf("hello, I am the parent of %d (pid:%d)\n", rc, (int) getpid());
    sleep(1);
  }
  sleep(1);
  return 0;
}




