/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antthoma <antthoma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 22:52:09 by antthoma          #+#    #+#             */
/*   Updated: 2022/06/15 00:22:48 by antthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int	i;

	i = 0;
	while (*((char *)src + i) != '\0' && i < n)
	{
		*((char *)dest + i) = *((char *)src + i);
		i++;
	}
	*((char *)dest + (i + 1)) = '\0';
	return (dest);
}
