/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzoubir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 22:51:16 by mzoubir           #+#    #+#             */
/*   Updated: 2025/10/15 22:51:17 by mzoubir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*csrc;
	unsigned char		*cdest;

	if (!dest || !src)
		return (NULL);
	csrc = src;
	cdest = dest;
	if (cdest <= csrc)
		ft_memcpy(cdest, csrc, n);
	else
	{
		cdest += n - 1;
		csrc += n - 1;
		while (n--)
			*cdest-- = *csrc--;
	}
	return (dest);
}
