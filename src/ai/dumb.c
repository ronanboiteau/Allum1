/*
** dumb.c for allum1 in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Wed Feb 17 17:37:41 2016 Ronan Boiteau
** Last update Wed Feb 17 17:58:24 2016 Ronan Boiteau
*/

#include "allum1_board.h"
#include "allum1_random.h"
#include "my.h"
#include <stdlib.h>

int		_ai_dumb(t_line *board)
{
  int		matches;
  int		line;
  int		nb_lines;
  int		*lines;

  my_printf(EOL "AI's turn..." EOL);
  (void)board;
  if ((lines = _get_lines(board, &nb_lines)) == NULL)
    {
      my_dprintf(STDERR, "ERROR: Out of memory! malloc() failed" EOL);
      return (-1);
    }
  line = lines[(rand() % nb_lines)];
  matches = (rand() % _get_rand_matches(board, line)) + 1;
  if (_remove_matches(board, line, matches) == EXIT_FAILURE)
    {
      my_dprintf(STDERR, "AI crashed! KO victory..." EOL);
      return (-1);
    }
  my_printf("AI removed %i match(es) from line %i" EOL, matches, line);
  free(lines);
  return (matches);
}
