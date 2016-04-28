/*
** free.c for allum1 in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Tue Feb  9 14:00:29 2016 Ronan Boiteau
** Last update Tue Feb  9 14:47:19 2016 Ronan Boiteau
*/

#include "allum1_board.h"
#include <stdlib.h>

void		_free_board(t_line *board)
{
  t_line	*tmp;
  t_line	*next;

  tmp = board;
  while (tmp != NULL)
    {
      next = tmp->next;
      free(tmp);
      tmp = next;
    }
  return ;
}
