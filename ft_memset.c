
#include <string.h>

void		*ft_memset(void *b, int c, size_t len)
{
  size_t	i;
  unsigned char	*s;
  
  s = (unsigned char *)b;
  i = -1;
  while (++i < len)
    s[i] = (unsigned char)c;
  return (b);
}
