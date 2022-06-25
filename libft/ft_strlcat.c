/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antthoma <antthoma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 21:53:59 by antthoma          #+#    #+#             */
/*   Updated: 2022/06/21 01:33:31 by antthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	int			count_dst;
	const char	*buffer_src;
	char		*buffer_dst;

	buffer_src = src;
	buffer_dst = dst;
	count_dst = 0;
	while (buffer_dst[count_dst] != '\0')
		count_dst++;
	i = 0;
	while (i < size && buffer_src[i] != '\0')
	{
		buffer_dst[count_dst] = buffer_src[i];
		i++;
		count_dst++;
	}
	buffer_dst[count_dst] = '\0';
	return (count_dst);
}
