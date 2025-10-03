#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char 	*ptr;
	size_t	i;
	
	ptr = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}