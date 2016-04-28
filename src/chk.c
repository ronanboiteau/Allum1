/*
** chk.c for allum1 in /home/boitea_r/c/PSU_2015_minitalk
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sun Feb 21 19:07:38 2016 Ronan Boiteau
** Last update Sun Feb 21 19:15:06 2016 Ronan Boiteau
*/

#include "allum1_board.h"
#include "my.h"
#include <stdlib.h>

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
