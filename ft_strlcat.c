/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzoubir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 01:14:26 by mzoubir           #+#    #+#             */
/*   Updated: 2025/10/16 01:14:28 by mzoubir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen ;
	size_t	total_len;
	size_t	to_copy;
	size_t	i;
	
	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	total_len = dlen + slen;
	if (size == 0 || dlen >= size) {
		return total_len;
	}
	to_copy = size - dlen - 1;
	i = 0;
	while (src[i] != '\0' && i < to_copy) {
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return (total_len);
}
