#include "my.h"
#include <stdlib.h>

int		match(char *str1, char *str2)
{
  if (str1 == NULL || str2 == NULL)
    return (FALSE);
  if (nmatch(str1, str2) > 0)
    return (TRUE);
  return (FALSE);
}
