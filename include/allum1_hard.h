/*
** allum1_hard.h for allum1 in /home/boitea_r/c/PSU_2015_minitalk
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sun Feb 21 20:20:58 2016 Ronan Boiteau
** Last update Sun Feb 21 20:24:12 2016 Ronan Boiteau
*/

#ifndef ALLUM1_HARD_H_
# define ALLUM1_HARD_H_

void		_fill_stack(int *stack, int *idx, int nbr);
void		_finish_him(t_line *board,
			      int *line,
			      int *matches,
			      int one_match_lines);
int		_malloc_failed(void);

#endif /* !ALLUM1_HARD_H_ */
