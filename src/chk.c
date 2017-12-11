#include <stdlib.h>
#include "allum1_board.h"
#include "my.h"

static int	_quit_empty(int *ok)
{
  my_printf("Error: this line is empty" EOL);
  *ok = FALSE;
  return (FALSE);
}

static int	_quit_out_of_range(int *ok)
{
  my_printf("Error: this line is out of range" EOL);
  *ok = FALSE;
  return (FALSE);
}

int		_chk_line_nbr(t_line *board, int line, int *ok)
{
  int		idx;

  if (line < 0)
    {
      my_printf("Error: invalid input (positive number expected)" EOL);
      *ok = FALSE;
      return (FALSE);
    }
  else if (line == 0)
    return (_quit_out_of_range(ok));
  idx = 1;
  while (idx != line)
    {
      if (board->next == NULL)
	return (_quit_out_of_range(ok));
      board = board->next;
      idx += 1;
    }
  if (board->matches == 0)
    return (_quit_empty(ok));
  return (TRUE);
}
