#include "libft.h"


static int	to_trim(const char *set, char c)
{
	size_t i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	if (!s1)
		return (NULL);
	else if (!set || set[0] == '\0')
		return (ft_strdup(s1));
	else if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	i = 0;
	while (s1[i] && to_trim(set, s1[i]))
		i++;
	j = ft_strlen(s1);
	while (j > i && to_trim(set, s1[j - 1]))
		j--;
	if (i >= j)
		return (ft_strdup(""));
	ptr = malloc(sizeof(char) * (j - i + 1));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s1 + i, j - i + 1);
	return (ptr);
}
