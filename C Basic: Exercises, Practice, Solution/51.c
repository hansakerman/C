#include <stdio.h>

int main(int argc, char *argv[]){

  int array[6];

  for(int i=0;i<6;i++){
    scanf("%d",&array[i]);
  }
  printf("\n");
  
  // should be a function swap_array() or sumthing.
  int tmp;
  tmp = array[0];
  array[0] = array[5];
  array[5] = tmp;

  tmp = array[1];
  array[1] = array[4];
  array[4] = tmp;

  tmp = array[2];
  array[2] = array[3];
  array[3] = tmp;
  
  for(int i=0;i<6;i++){
    printf("%d\n",array[i]);
  }
  
  
  return 0;
}
