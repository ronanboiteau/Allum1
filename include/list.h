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
