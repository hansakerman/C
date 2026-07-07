#include <stdio.h>
#include <math.h>


int main(int argc, char *argv[]){
  int seconds;
  printf("Input seconds: ");
  scanf("%d", &seconds);

  int hours = seconds/3600;
  int minutes = (seconds-(hours*3600))/60;
  int secreminder = seconds-(minutes*60+hours*3600);
  
  printf("Hours: %d \n", hours);
  printf("Minutes: %d \n", minutes);
  printf("Seconds: %d \n", secreminder);
  
  return 0;
}
