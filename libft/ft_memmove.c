/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antthoma <antthoma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 23:52:54 by antthoma          #+#    #+#             */
/*   Updated: 2022/07/01 20:07:49 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
