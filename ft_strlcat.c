#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t dsize = 0;
	size_t ssize;
	size_t i;

	ssize = ft_strlen(src);
	
	if (size == 0)
		return (ssize);
	
	dsize = ft_strlen(dst);

	if (size <= dsize)
		return (size + ssize);

	i = 0;
	while (src[i] && (dsize + i) < (size - 1))
	{
		dst[dsize + i] = src[i];
		i++;
	}
	dst[dsize + i] = '\0';
	
	return (dsize + ssize);
}