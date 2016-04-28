/*
** hard2.c for allum1 in /home/boitea_r/c/PSU_2015_minitalk
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sun Feb 21 20:21:41 2016 Ronan Boiteau
** Last update Sun Feb 21 20:24:28 2016 Ronan Boiteau
*/

#include "allum1_board.h"
#include "my.h"

void		_finish_him(t_line *board,
			    int *line,
			    int *matches,
			    int one_match_lines)
{
  while (board->matches <= 1)
    board = board->next;
  *line = board->line;
  *matches = board->matches;
  if (one_match_lines % 2 == 0)
    *matches -= 1;
  return ;
}

void		_fill_stack(int *stack, int *idx, int nbr)
{
  stack[*idx] = nbr;
  *idx += 1;
  return ;
}

int		_malloc_failed(void)
{
  my_dprintf(STDERR, "ERROR: Out of memory! malloc() failed" EOL);
  return (-1);
}
