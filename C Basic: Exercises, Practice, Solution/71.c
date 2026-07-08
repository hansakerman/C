#include <stdio.h>
#include <string.h>

/*
71. Copy a string into another and count its characters

Write a C program to copy a given string into another and count the number of characters copied.
Input a string
Original string: w3resource
Number of characters = 10
 */

int main(int argc, char *argv[]){
  char string[100];
  char copy[100];
  printf("Input a string: ");
  fgets(string, sizeof(string), stdin);
  printf("Original string: %s\n",string);

  strcpy(copy,string);
  printf("copied string: %s\n",copy);
  printf("number of characters: %lu\n",strlen(copy)-1);  
  return 0;
}


