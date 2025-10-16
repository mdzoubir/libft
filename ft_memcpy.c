/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzoubir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 21:11:43 by mzoubir           #+#    #+#             */
/*   Updated: 2025/10/15 21:11:44 by mzoubir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*csrc;
	unsigned char		*cdest;

	if (!dest || !src)
		return (NULL);
	csrc = src;
	cdest = dest;
	while (csrc && n--)
		ft_memset(cdest++, (char)(*csrc++), 1);
	return (dest);
}
