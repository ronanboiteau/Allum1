/*
** easy.c for allum1 in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Wed Feb 17 17:38:02 2016 Ronan Boiteau
** Last update Sun Feb 21 18:25:12 2016 Ronan Boiteau
*/

#include "allum1_board.h"
#include "allum1_marienbad.h"
#include "allum1_random.h"
#include "my.h"
#include <stdlib.h>

static int	_get_problematic_stack(t_line *board)
{
  if (!_is_stack256_ok(board))
    return (256);
  if (!_is_stack128_ok(board))
    return (128);
  if (!_is_stack64_ok(board))
    return (64);
  if (!_is_stack32_ok(board))
    return (32);
  if (!_is_stack16_ok(board))
    return (16);
  if (!_is_stack8_ok(board))
    return (8);
  if (!_is_stack4_ok(board))
    return (4);
  if (!_is_stack2_ok(board))
    return (2);
  if (!_is_stack1_ok(board))
    return (1);
  return (-1);
}

int		_ai_easy(t_line *board)
{
  int		line;
  int		nb_lines;
  int		*lines;
  int		matches;

  my_printf(EOL "AI's turn..." EOL);
  if ((lines = _get_lines(board, &nb_lines)) == NULL)
    {
      my_dprintf(STDERR, "ERROR: Out of memory! malloc() failed" EOL);
      return (-1);
    }
  if ((matches = _get_problematic_stack(board)) == -1 ||
      (line = _get_problematic_line(board, matches)) == -1)
    {
      line = lines[(rand() % nb_lines)];
      matches = (rand() % _get_rand_matches(board, line)) + 1;
    }
  if (_remove_matches(board, line, matches) == EXIT_FAILURE)
    {
      my_dprintf(STDERR, "AI crashed! KO victory..." EOL);
      return (-1);
    }
  my_printf("AI removed %i match(es) from line %i" EOL, matches, line);
  free(lines);
  return (matches);
}
