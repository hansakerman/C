#include <stdio.h>
#include <unistd.h>
#include <assert.h>

int fork_or_end() {

  int rc = fork();
  assert(rc >= 0);
  return rc;
}


int main (int argv, char *argc[])
{

  printf("%d\n", (int) fork_or_end());
  return 0;
}


