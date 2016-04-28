/*
** print.c for allum1 in /home/boitea_r/c/PSU_2015_minitalk
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sun Feb 21 18:25:32 2016 Ronan Boiteau
** Last update Sun Feb 21 18:25:33 2016 Ronan Boiteau
*/

#include "allum1_board.h"
#include "my.h"
#include <stdlib.h>

static void	_print_header_footer(int last_column)
{
  int		idx;

  idx = 0;
  while (idx < last_column)
    {
      my_printf("%c", '*');
      idx++;
    }
  my_printf(EOL);
  return ;
}

static void	_print_extra_spaces(int idx, int lines)
{
  while (idx < lines)
    {
      my_printf("%c", ' ');
      idx++;
    }
  return ;
}

static void	_print_last_column(int idx, int last_column)
{
  while (idx < last_column)
    {
      my_printf("%c", ' ');
      idx++;
    }
  my_printf("%c", '*');
  return ;
}

void		_print_board(t_line *list_start, int lines)
{
  t_line	*tmp;
  int		idx;
  int		matches;

  idx = 1;
  tmp = list_start;
  _print_header_footer((lines * 2) + 1);
  while (tmp != NULL)
    {
      my_printf("%c", '*');
      _print_extra_spaces(idx, lines);
      matches = 0;
      while (matches < tmp->matches)
	{
	  my_printf("%c", '|');
	  matches++;
	}
      _print_last_column((matches - idx + lines + 2), (lines * 2) + 1);
      my_printf(EOL);
      tmp = tmp->next;
      idx++;
    }
  _print_header_footer((lines * 2) + 1);
  return ;
}
