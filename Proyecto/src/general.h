#ifndef __GENERAL_H__
#define __GENERAL_H__

#define _GNU_SOURCE
#include <errno.h>

#define BOARD_FN "board"
#define SIZE     8

#define IN_LIMITS(x) (x)>=0 && (x)<SIZE

#define USAGE "\
    Usage: %s \n\
           Shows the board contained in <" BOARD_FN "> \n\
           and checks for tower possibilities.\n\
"

struct TVector {
    int x;
    int y;
};


enum TPiece {white1,black1};

struct Color {
    const char *white;
    const char *black;
};

struct Piece {
    enum TPiece class_number;
    char symbol;
    struct Color bs;   /* Board Symbol */
    const char *name;
    int (*my_check) (int, int, struct TVector, char [SIZE][SIZE]);

};

#define PIECES 2
extern struct Piece set[PIECES];


#endif

