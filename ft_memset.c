#include "libft.h"

void    *ft_memset(void *ptr, int c, size_t n)
{
	unsigned char   *str;
	size_t			i;

	str = (unsigned char *)ptr;
	i = 0;
	while (i < n)
		str[i++] = (unsigned char)c;

	return ptr;
}