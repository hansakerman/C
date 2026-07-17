#include <stdio.h>
// This be ugly. Since there is no logic handling this and there will be an array index overflow... 
#define MAX_WORD_LEN 15

/*
Exercise 1-13. Write a program to print a histogram of the lengths of
words in its input. It is easy to draw the histogram with the bars
horizontal; a vertical orientation is more challenging.
 */

int main(){
  // I do a skeleton version. I don't consider all whitespaces and stuff.

  int c;
  int word_length[MAX_WORD_LEN] = { 0 };
  int len=0;
  
  while ((c = getchar()) != EOF){
    if (c == ' ' | c == '\n'){
      word_length[len] = word_length[len] + 1;
      len = 0;
    } else {
      ++len;
    }
  }

  for (int i = 1; i <= MAX_WORD_LEN - 1 ; ++i){
    printf("%i %i ", i, word_length[i]);
    for (int j = 0; j <= word_length[i]; ++j ){
      printf("*");
    }
    printf("\n");
  }

}
