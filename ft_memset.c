/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzoubir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 22:05:04 by mzoubir           #+#    #+#             */
/*   Updated: 2025/10/14 22:05:05 by mzoubir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*scpy;

	if (!s)
		return (0);
	scpy = s;
	while (n && scpy)
	{
		*scpy = (unsigned char)c;
		scpy++;
		n--;
	}
	return (s);
}
