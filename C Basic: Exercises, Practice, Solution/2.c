/*
  2. Get the C version in use

Write a C program to get the C version you are using.
Expected Output:

We are using C18!
*/

#include <stdio.h>

int main(){
  long version = __STDC_VERSION__;
  printf("%ld \n",version);
  }
