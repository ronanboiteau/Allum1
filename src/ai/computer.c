/*
** computer.c for allum1 in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sat Feb  6 16:47:26 2016 Ronan Boiteau
** Last update Wed Feb 17 17:38:38 2016 Ronan Boiteau
*/

#include "allum1_board.h"
#include "allum1_play.h"

int		_computer_turn(t_line *board, char mode)
{
  int		matches;

  if (mode == 0)
    matches = _ai_easy(board);
  if (mode == 1)
    matches = _ai_medium(board);
  if (mode == 2)
    matches = _ai_hard(board);
  if (mode == 3)
    matches = _ai_dumb(board);
  return (matches);
}
