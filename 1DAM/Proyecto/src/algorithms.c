
#include "algorithms.h"

#define UP         direction[0]
#define UP_RIGHT   direction[1]
#define RIGHT      direction[2]
#define RIGHT_DOWN direction[3]
#define DOWN       direction[4]
#define DOWN_LEFT  direction[5]
#define LEFT       direction[6]
#define LEFT_UP    direction[7]

int check_direction (int row, int col, struct TVector dir, char board[SIZE][SIZE]);
int check_position (int row, int col, struct TVector dir, char board[SIZE][SIZE]);

struct TVector direction[] = {
    {0, -1}, {1, -1}, {1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}
};

struct TVector k_mv[] = {
    {2, 1}, {2, -1}, {-2, 1}, {-2, -1},
    {1, 2}, {1, -2}, {-1, 2}, {-1, -2}
};


struct TVector *white_mv[] = { &RIGHT, &LEFT, &UP, &DOWN, NULL  };
struct TVector *black_mv[] = { &UP_RIGHT, &LEFT_UP, &RIGHT_DOWN, &DOWN_LEFT, NULL  };


struct TVector **movements[] = {
    white_mv, black_mv
    };

struct Piece set[] = {
   {white,   'B', {"⚪"}, "Blanca" , &check_position  },
   {black,   'N', {"⚫"}, "Negra" , &check_direction },
//   {nop,    ' ', {" ", " "}, "Espacio", NULL }
};


int
is_empty (int row, int col, char board[SIZE][SIZE])
{
  return board[row][col] == ' ';
}

int
check_direction (int row, int col, struct TVector dir, char board[SIZE][SIZE])
{
  int offs;
  struct TVector cell = { col, row };
  ADD (cell, dir);

  for (offs = 0; IN_LIMITS (cell.x) && IN_LIMITS (cell.y); ADD (cell, dir))
    if (!is_empty (cell.y, cell.x, board))
      {
	print_possibility (cell.y, cell.x, board);
	return 1;
      }
  return 0;
}

int
check_position (int row, int col, struct TVector dir, char board[SIZE][SIZE])
{
  struct TVector cell = { col, row };
  ADD (cell, dir);

  if (    IN_LIMITS (cell.x) && IN_LIMITS (cell.y) &&
          !is_empty (cell.y, cell.x, board))
  {
      print_possibility (cell.y, cell.x, board);
      return 1;
  }
  return 0;
}

    int
check (int row, int col, char board[SIZE][SIZE], enum TPiece piece)
{
    int i;

    prepare_win (OUT_LIN);
    printf (BOLD_ON
            "\tCOMPROBANDO EL %s\n" "\t====================\n\n" BOLD_OFF, set[piece].name);

    for (i=0; movements[piece][i] != NULL; i++)
        (*set[piece].my_check)(row, col, *movements[piece][i], board);
}

