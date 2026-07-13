#include <stdio.h>
#include <stdint.h>

// This is not entirely serious. : ) A friends programming student
// handed in a crappy vibe coded C# implementation of tic tac toe so I
// did this in a quite conveluted way. C rocks.
// ps. The code is totally unreadable.

void render_board(uint16_t O, uint16_t X){
  int mask;
  printf("\n\t");
  for(int i = 8; i >= 0 ; --i){
    mask = 1 << i;
    if(O & mask){
      printf("O ");
    } else if(X & mask) {
      printf("X ");
    } else {
      printf("%d ", i + 1);
    }
    if ((i % 3) == 0 ) printf("\n\t");
  }
}

int legal_move(uint16_t O, uint16_t X, short mask){
  // Will return 0 if illegal and mask if legal.
  if( (O | X) & mask ){
    printf("Illegal move: Space occupied.\n");
    return 0;
  } else {
    return mask;
  }
}

const char *check_input(short input){
  if ( 1 > input || input > 9)
    {
      return "Illegal move: Write input as 1-9.\n";
    }
  return 0;
}

int play(uint16_t P, char *player){
  short input;
  short legal = 0;

  while ( !legal ) {
    printf("Play as %s: ", player);
    scanf("%hd", &input);

    const char *error = check_input(input);
    if (error != NULL){
      printf("%s", error);
      continue;
    }
    legal = 1;
  }
  return input;
}
	    
int main(){

  // Player state struct
  struct game_state {  
    uint16_t O;
    uint16_t X;
  };

  // The eight win patterns for tic tac toe.
  // we are only using the 9 least significannt bits of the 16-bit unsigned integer.

uint16_t win_pattern[8] = {
    0b0000000111,
    0b000111000,
    0b111000000,
    0b100100100,   
    0b010010010,
    0b001001001,
    0b001010100,
    0b100010001 
    };

 struct game_state player = { 0, 0 };

 // Game loop

 short mask;
 
 while ( 1 ) { // should be until win. We look at the winning patterns.
   render_board(player.O, player.X);
   
   // play() returns integer what position played
   printf("This was played %hd",play(player.O, "O"));

   
   // mask is now a bitpattern.
   //mask = 1 << (input - 1);
   //player.O = player.O | legal_move(player.O, player.X, mask);
 }
}

