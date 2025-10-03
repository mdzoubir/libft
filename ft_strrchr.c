#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	char *str;
	int	slen;

	str = (char *)s;
	slen = ft_strlen(str);
	
	while (slen >= 0)
	{
		if (str[slen] == c)
			return (str + slen);
		slen--;
	}
	return (NULL);
}