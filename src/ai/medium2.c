/*
** medium2.c for allum1 in /home/boitea_r/c/PSU_2015_minitalk
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sun Feb 21 20:06:05 2016 Ronan Boiteau
** Last update Sun Feb 21 20:07:36 2016 Ronan Boiteau
*/

#include "allum1_board.h"
#include <stdlib.h>

int		_count_one_match_lines(t_line *board)
{
  int		lines;

  lines = 0;
  while (board != NULL)
    {
      if (board->matches == 1)
	lines += 1;
      board = board->next;
    }
  return (lines);
}

int		_count_remaining_stacks(t_line *board)
{
  int		stacks;

  stacks = 0;
  while (board != NULL)
    {
      if (board->matches != 0)
	stacks += 1;
      board = board->next;
    }
  return (stacks);
}
