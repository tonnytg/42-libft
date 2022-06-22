/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antthoma <antthoma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 21:53:59 by antthoma          #+#    #+#             */
/*   Updated: 2022/06/21 18:26:46 by antthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	src_count;
	unsigned int	dst_count;
	unsigned int	dst_len;
	unsigned int	src_len;

	src_count = 0;
	dst_count = 0;
	while (dst[dst_count] != '\0')
		dst_count++;
	dst_len = dst_count;
	src_len = ft_strlen(src);
	if (size <= dst_len)
		return (src_len + size);
	while (src[src_count] != '\0'
		&& src_count < size - dst_len - 1)
	{
		dst[dst_count] = src[src_count];
		src_count++;
		dst_count++;
	}
		dst[dst_count] = '\0';
	return (dst_len + src_len);
}

/*
	strlcat() that means the initial length of
    dst plus the length of src.
*/