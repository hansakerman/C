#include <stdio.h>
#include <stdlib.h>

void print_var_info(int *addr){
  printf("Info:\n");
  printf("Adress: %p\n", (void *)addr);
  printf("Value : %d\n", *addr);
}
  
int main(){

  int x[10]; // How many bytes does this stack variable allocate?
  printf("%lu\n", sizeof(x));
  
  /* Malloc returns an adress to memory space The malloc() function
     allocates size bytes of memory and returns a pointer to the
     allocated memory. */

  // Create a pointer to the memory allocated.
  int *my_addr = malloc(sizeof(int)); // in the pointer var we'll get an adress

  // Dereferencing. We stora a value at the adress of the pointer.
  *my_addr=4;

  print_var_info(my_addr);

  free(my_addr);
  return 0;
}
