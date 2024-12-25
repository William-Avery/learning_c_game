#ifndef GAME_H
#define GAME_H

#include <stdio.h>
#include <stdbool.h>
#include <time.h>

void game_init();
void game_run();
void game_end();
bool is_hit(const double *hit_rating);

typedef struct {
    double hp_max;              // HP MAX
    double hp_current;          // HP CURRENT
    double hit_chance;          // HIT CHANCE
    double ap;                  // ATTACK POINTS
    double dp;                  // DEFENSE POINTS
} Mob;

#endif // GAME_H