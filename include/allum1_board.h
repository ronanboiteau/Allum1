/*
** allum1_board.h for allum1 in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sat Feb  6 16:28:22 2016 Ronan Boiteau
** Last update Sat Feb 13 20:22:33 2016 Ronan Boiteau
*/

#ifndef ALLUM1_BOARD_H_
# define ALLUM1_BOARD_H_

typedef struct	s_line
{
  int		line;
  int		matches;
  int		stack_1;
  int		stack_2;
  int		stack_4;
  int		stack_8;
  int		stack_16;
  int		stack_32;
  int		stack_64;
  int		stack_128;
  int		stack_256;
  struct s_line	*next;
}		t_line;

t_line		*_add_line(t_line *list_ptr, int matches, int idx);
void		_free_board(t_line *board);
void		_print_board(t_line *list_start, int lines);
int		_remove_matches(t_line *board, int line, int matches);

#endif /* !ALLUM1_BOARD_H_ */
