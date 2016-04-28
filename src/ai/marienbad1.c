/*
** marienbad1.c for allum1 in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Wed Feb 17 17:33:52 2016 Ronan Boiteau
** Last update Sun Feb 21 18:21:21 2016 Ronan Boiteau
*/

#include "allum1_board.h"
#include "allum1_marienbad.h"
#include "my.h"
#include <stdlib.h>

int		_get_problematic_line(t_line *board, int stack)
{
  while (board != NULL)
    {
      if (board->matches >= stack)
	return (board->line);
      board = board->next;
    }
  return (-1);
}

int		_is_stack8_ok(t_line *board)
{
  int		sum;

  sum = 0;
  while (board != NULL)
    {
      sum += board->stack_8;
      board = board->next;
    }
  if (sum % 2 == 1)
    return (FALSE);
  return (TRUE);
}

int		_is_stack4_ok(t_line *board)
{
  int		sum;

  sum = 0;
  while (board != NULL)
    {
      sum += board->stack_4;
      board = board->next;
    }
  if (sum % 2 == 1)
    return (FALSE);
  return (TRUE);
}

int		_is_stack2_ok(t_line *board)
{
  int		sum;

  sum = 0;
  while (board != NULL)
    {
      sum += board->stack_2;
      board = board->next;
    }
  if (sum % 2 == 1)
    return (FALSE);
  return (TRUE);
}

int		_is_stack1_ok(t_line *board)
{
  int		sum;

  sum = 0;
  while (board != NULL)
    {
      sum += board->stack_1;
      board = board->next;
    }
  if (sum % 2 == 1)
    return (FALSE);
  return (TRUE);
}
