/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antthoma <antthoma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 23:52:54 by antthoma          #+#    #+#             */
/*   Updated: 2022/06/15 13:31:00 by antthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int		i;
	char	*buffer_dest;
	char	*buffer_src;

	buffer_src = ((char *)src);
	buffer_dest = ((char *)dest);
	i = 0;
	while (i < n)
	{
		buffer_dest[i] = buffer_src[i];
		i++;
	}
	return buffer_dest;
}

/*
	Function: ft_memmove

	create a buffer to copy byte and don't do overlap
	return buffer_dest copied.
*/