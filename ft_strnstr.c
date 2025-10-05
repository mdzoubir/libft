#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t  i;
	size_t	occr;
	size_t	lneedle;

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	lneedle = ft_strlen(needle);
	if (lneedle > len)
    	return (NULL);
	while (i + lneedle <= len && haystack[i])
	{
		occr = 0;
		while (haystack[i + occr] && 
				needle[occr] &&
				haystack[i + occr] == needle[occr] &&
				i + occr < len)
				occr++;
		if (occr == lneedle)
				return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}