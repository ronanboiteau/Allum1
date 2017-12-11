#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include "allum1_board.h"
#include "allum1_options.h"
#include "allum1_play.h"
#include "my.h"

static void	_start_game(t_line *board, int lines, int matches, char mode)
{
  int		player;
  int		(*players[2])(t_line *board, char mode);
  int		removed;

  player = rand() % 2;
  players[0] = _player_turn;
  players[1] = _computer_turn;
  while (TRUE)
    {
      _print_board(board, lines);
      if ((removed = players[player](board, mode)) < 0)
	return ;
      matches -= removed;
      player = !player;
      if (matches == 0)
	{
	  _print_board(board, lines);
	  if (player == 0)
	    my_printf("I lost.. snif.. but I'll get you next time!!" EOL);
	  else
	    my_printf("You lost, too bad.." EOL);
	  return ;
	}
    }
}

int		main(int argc, char **argv)
{
  t_line	*board;
  int		lines;
  int		idx;
  int		matches;
  char		mode;

  if (_is_help(argc, argv) == -1)
    return (EXIT_SUCCESS);
  if ((lines = _get_lines_nbr(argc, argv)) == -1
      || (mode = _get_mode(argc, argv)) == -1)
    return (EXIT_FAILURE);
  srand(time(0) / getpid());
  board = NULL;
  matches = 0;
  idx = 1;
  while (idx <= lines)
    {
      if ((board = _add_line(board, (idx * 2) - 1, idx)) == NULL)
	return (EXIT_FAILURE);
      matches += ((idx * 2) - 1);
      idx += 1;
    }
  _start_game(board, lines, matches, mode);
  _free_board(board);
  return (EXIT_SUCCESS);
}
