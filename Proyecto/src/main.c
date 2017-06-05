#include <stdio.h>
#include <stdlib.h>

#include "general.h"
#include "io.h"
#include "algorithms.h"

int
main (int argc, char *argv[])
{
  char board[SIZE][SIZE];
  int row, col;
  enum TPiece piece;

  do
    {
      set_color(white);
      load (BOARD_FN, board);
      title ("Reversi");
      dump (board);
      ask_piece(&piece);
      do
	{
	  ask_coordinates (&row, &col, set[piece].name);
	}
      while (!good_coordinates (row, col) ||
	     !is_empty (row, col,board));
      set_color(black);
      print_piece (set[piece].symbol, row, col);
      check (row, col, board, set[piece].class_number);
    }
  while (repeat ());

  MOVE(EXIT_LIN, 1);

  return EXIT_SUCCESS;
}

