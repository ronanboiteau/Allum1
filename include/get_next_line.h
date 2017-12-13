#ifndef GET_NEXT_LINE_H_
# define GET_NEXT_LINE_H_

# ifndef READ_SIZE
#  define READ_SIZE (3)
# endif

# define TRUE	(1)
# define FALSE	(0)

# define C_EOL	'\n'
# define C_NUL	'\0'
# define EOL	"\n"
# define NUL	"\0"

typedef unsigned int		t_uint;

char	*get_next_line(int const fd);

#endif /* !GET_NEXT_LINE_H_ */
