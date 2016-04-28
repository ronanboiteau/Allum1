/*
** list.h for allum1 in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sat Feb  6 15:33:26 2016 Ronan Boiteau
** Last update Sat Feb  6 16:22:03 2016 Ronan Boiteau
*/

#ifndef LIST_H_
# define LIST_H_

typedef struct	s_node
{
  int		matches;
  struct s_node	*next;
}		t_node;

void		_print_board(t_node *list_start, int lines);
t_node		*_put_in_list(t_node *list_ptr, int matches);

#endif /* !LIST_H_ */
