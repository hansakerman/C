#include <stdio.h>

// why do main return an int?
// Exit status or return value
// It can for example be read in the shell via the variable $?.


int main(int argc, char *argv[])
{
  printf("Hello world! My command name is %s\n",argv[0]);
  return 0;
}

