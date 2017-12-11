#include "my.h"
#include <stdlib.h>

int		my_strncmp(const char *str1, const char *str2, t_uint nbr)
{
  t_uint	idx;

  if (str1 == NULL || str2 == NULL)
    return (-1);
  idx = 0;
  while (str1[idx] != C_NUL && str2[idx] != C_NUL && idx < nbr)
    {
      if (str1[idx] != str2[idx])
	return (str1[idx] - str2[idx]);
      idx += 1;
    }
  if (idx < nbr)
    return (-1);
  return (0);
}
