/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antthoma <antthoma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 21:53:59 by antthoma          #+#    #+#             */
/*   Updated: 2022/06/21 14:05:47 by antthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t		i;
	const char	*buffer_src;
	char		*buffer_dst;

	buffer_src = src;
	buffer_dst = dst;
	i = 0;
	if (size > 0)
	{
		while (i < (size - 1) && buffer_src[i] != '\0')
		{
			buffer_dst[i] = buffer_src[i];
			i++;
		}
		buffer_dst[i] = '\0';
	}
	while (buffer_src[i])
		i++;
	return (i);
}

// size_t	ft_strlcpy(char *dest, const char *src, size_t size)
// {
// 	size_t	index;

// 	index = 0;
// 	if (size > 0)
// 	{
// 		while (src[index] && index < (size - 1))
// 		{
// 			dest[index] = src[index];
// 			index++;
// 		}
// 		dest[index] = '\0';
// 	}
// 	while (src[index])
// 		index++;
// 	return (index);
// }