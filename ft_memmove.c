#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *cdest;
	const unsigned char *csrc;
	size_t	i;


	if (dest == src || n == 0)
        return (dest);

	cdest = dest;
	csrc = src;

	if (cdest > csrc)
	{
		i = n;
		while (i > 0)
		{
			cdest[i - 1] = csrc[i - 1];
			i--;
		}
	}
	else
		ft_memcpy(cdest, csrc, n);
	return (dest);
}