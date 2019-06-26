#ifndef SPRITES_H
#define SPRITES_H
#define size 4

extern char *enemy_type1;
extern int enemy_matrix[ENEMY_LINES][ENEMY_QUANTITY];

void print_wave(
    int a,
    int b,
    int enemy_qty,
    int enemy_line,
    char *enemy_sprite,
    struct Tplayer *player,
    int max_x,
    int first,
    int line
);

void move_wave(
    int a,
    int enemy_qty,
    int enemy_line,
    int max_x,
    int speed,
    char *enemy_sprite,
    struct Tplayer *player
);

#endif
