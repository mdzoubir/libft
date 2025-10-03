#include "libft.h"


void	ft_bzero(void *ptr, size_t n)
{
	unsigned char *str;
	
	str = (unsigned char *)ptr;
	while (n--)
		*str++ = 0;
}