/*
** marienbad2.c for allum1 in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Wed Feb 17 17:33:28 2016 Ronan Boiteau
** Last update Sun Feb 21 18:21:23 2016 Ronan Boiteau
*/

#include "allum1_board.h"
#include "my.h"
#include <stdlib.h>

int		_is_stack256_ok(t_line *board)
{
  int		sum;

  sum = 0;
  while (board != NULL)
    {
      sum += board->stack_256;
      board = board->next;
    }
  if (sum % 2 == 1)
    return (FALSE);
  return (TRUE);
}

int		_is_stack128_ok(t_line *board)
{
  int		sum;

  sum = 0;
  while (board != NULL)
    {
      sum += board->stack_128;
      board = board->next;
    }
  if (sum % 2 == 1)
    return (FALSE);
  return (TRUE);
}

int		_is_stack64_ok(t_line *board)
{
  int		sum;

  sum = 0;
  while (board != NULL)
    {
      sum += board->stack_64;
      board = board->next;
    }
  if (sum % 2 == 1)
    return (FALSE);
  return (TRUE);
}

int		_is_stack32_ok(t_line *board)
{
  int		sum;

  sum = 0;
  while (board != NULL)
    {
      sum += board->stack_32;
      board = board->next;
    }
  if (sum % 2 == 1)
    return (FALSE);
  return (TRUE);
}

int		_is_stack16_ok(t_line *board)
{
  int		sum;

  sum = 0;
  while (board != NULL)
    {
      sum += board->stack_16;
      board = board->next;
    }
  if (sum % 2 == 1)
    return (FALSE);
  return (TRUE);
}
