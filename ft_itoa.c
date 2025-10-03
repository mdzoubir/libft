#include "libft.h"

static size_t	ft_intlen(int n)
{
	size_t	len;
	long	nb;

	nb = n;
	len = (nb <= 0) ? 1 : 0;
	if (nb < 0)
		nb *= -1;
	while(nb > 0)
	{
		len++;
		nb /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	size_t	n_len;
	long	nb;

	nb = n;
	if (nb == 0)
		return (ft_strdup("0"));
	n_len = ft_intlen(nb);
	ptr = malloc(sizeof(char) * (n_len + 1));
	if (!ptr)
		return (NULL);
	ptr[n_len] = '\0';
	if (nb < 0)
	{
		ptr[0] = '-';
		nb *= -1;
	}
	while (nb > 0)
	{
		ptr[--n_len] = (nb % 10) + '0'; 	
		nb /= 10;
	}
	return (ptr);
}