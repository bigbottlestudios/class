#include "math.h"
#include <stdio.h>

void play_game() {
    printf("Playing the game of numbers!\n");
    Add2Numbers(1, 2);
    Sub2Numbers(5, 1);
    Mul2Numbers(22, 2);
    Div2Numbers(100, 3);
}

void kill_player() {
    printf("PLayer dead!");
}