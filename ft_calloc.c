#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total;

	if (nmemb == 0 || size == 0)
    	return malloc(0);

	total = nmemb * size;
	if (total / size != nmemb)
		return NULL;

	ptr = malloc(total);
	if (!ptr) return NULL;

	ft_memset(ptr, 0, total);
	return ptr;

}