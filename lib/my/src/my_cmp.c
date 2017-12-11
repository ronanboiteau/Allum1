#include "my.h"
#include <stdlib.h>

int		my_cmp(const char *str1, const char *str2)
{
  if (str1 == NULL || str2 == NULL)
    return (FALSE);
  else if ((*str1 == '\0') && (*str2 == '\0'))
    return (TRUE);
  else if (*str1 == *str2)
    return (my_cmp(str1 + 1, str2 + 1));
  else
    return (FALSE);
}
