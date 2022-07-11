/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antthoma <antthoma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 00:32:32 by antthoma          #+#    #+#             */
/*   Updated: 2022/07/11 14:21:08 by antthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t size)
{
	size_t	i;

	i = 0;
	while (size > i)
	{
		((unsigned char *)ptr)[i] = (unsigned char) c;
		i++;
	}
	return (ptr);
}
