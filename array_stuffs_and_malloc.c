#include <stdio.h>
#include <sys/mman.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  // Initialisera minne
  int *arr = calloc(sizeof(int), 10);

  //Dereference.
  *arr=2;
  arr[9]=17;
  
  int i;
  for (i = 0; i < 10; i++) {
    printf("[%d]", arr[i]);
  }


  

  return 0;
}
