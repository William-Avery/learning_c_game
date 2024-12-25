#include "game.h"
#include <stdlib.h>

void game_init() {
    printf("Game initialized!\n");
}

void game_run() {
    printf("Game running!\n");
}

void game_end() {
    printf("Game ended!\n");
}

bool is_hit(const double *hit_rating) {
    srand((unsigned) time(NULL));
    double randValue = (double)rand() / (double)RAND_MAX;
    printf("Random value: %f\n", randValue);
    return (randValue < *hit_rating);
    return true;
}