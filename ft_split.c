#include "libft.h"

static size_t count_words(const char *str, char c)
{
    size_t i;
    size_t result;

	i = 0;
	result = 0;
    while (str[i])
    {
        while (str[i] == c)
            i++;
        if (str[i])
        {
            result++;
            while (str[i] && str[i] != c)
                i++;
        }
    }
    return result;
}


char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	counter;
	char 	**result;

	if(!s)
		return (NULL);

	result = ft_calloc(count_words(s, c) + 1, sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	counter = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if(s[i])
		{
			j = 0;
			while (s[i + j] && s[i + j] != c)
                j++;
            result[counter++] = ft_substr(s, i, j);
            i += j;
		}
	}
	return result;
}