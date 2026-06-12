#include <stdio.h>
#include <math.h>


// hey. here you must LINK the math library with -lm. ???? gcc -lm
// Not on macos
int main(int argc, char *argv[])
{
  printf("%f \n", sqrt(25));
  return 0;
}
