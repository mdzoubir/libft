#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	size_t src_len;
	size_t i;

	src_len = ft_strlen(src);
	if (dsize == 0)
		return (src_len);
	
	i = 0;
	while (i < dsize - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}