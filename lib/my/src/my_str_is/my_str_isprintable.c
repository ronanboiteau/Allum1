#include "my.h"
#include <stdlib.h>

int		my_str_isprintable(const char *str)
{
  t_uint	idx;

  if (str == NULL)
    return (FALSE);
  idx = 0;
  while (str[idx] != '\0')
    {
      if (!((str[idx] >= 32 && str[idx] <= 126) || str[idx] == '\0'
	    || (str[idx] >= 7 && str[idx] <= 13)))
	return (FALSE);
      idx += 1;
    }
  return (TRUE);
}
