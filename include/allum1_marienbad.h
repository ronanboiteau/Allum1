/*
** allum1_marienbad.h for allum1 in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sat Feb 13 22:23:11 2016 Ronan Boiteau
** Last update Wed Feb 17 17:32:13 2016 Ronan Boiteau
*/

#ifndef ALLUM1_MARIENBAD_H_
# define ALLUM1_MARIENBAD_H_

int		_get_problematic_line(t_line *board, int stack);
int		_is_stack1_ok(t_line *board);
int		_is_stack2_ok(t_line *board);
int		_is_stack4_ok(t_line *board);
int		_is_stack8_ok(t_line *board);
int		_is_stack16_ok(t_line *board);
int		_is_stack32_ok(t_line *board);
int		_is_stack64_ok(t_line *board);
int		_is_stack128_ok(t_line *board);
int		_is_stack256_ok(t_line *board);

#endif /* !ALLUM1_MARIENBAD_H_ */
