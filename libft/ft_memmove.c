/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antthoma <antthoma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 23:52:54 by antthoma          #+#    #+#             */
/*   Updated: 2022/06/23 16:47:49 by antthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*buffer_src;
	char	*buffer_dest;

	buffer_src = (char *)src;
	buffer_dest = (char *)dest;
	if (buffer_src < buffer_dest)
		while (n--)
			buffer_dest[n] = buffer_src[n];
	else
		ft_memcpy(buffer_dest, buffer_src, n);
	return (buffer_dest);
}

/*
	The  memmove() function copies n bytes from memory
	area src to memory area dest.
	The memory areas may overlap: copying takes
	place as though the bytes
	in src are first copied into a temporary array
	that does not overlap src or dest,
	and the bytes are then copied from the temporary
	array to dest.	
*/