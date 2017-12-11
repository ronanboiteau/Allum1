#include "my.h"
#include <stdlib.h>

int		my_str_isupper(const char *str)
{
  t_uint	idx;

  if (str == NULL)
    return (FALSE);
  idx = 0;
  while (str[idx] != '\0')
    {
      if (!(str[idx] >= 'A' && str[idx] <= 'Z'))
	return (FALSE);
      idx += 1;
    }
  return (TRUE);
}
