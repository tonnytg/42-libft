/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antthoma <antthoma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 18:41:39 by antthoma          #+#    #+#             */
/*   Updated: 2022/06/21 19:48:50 by antthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;

	if ((nmemb * size) / size != nmemb)
		return (NULL);
	mem = malloc((nmemb * size));
	if (!mem)
		return (NULL);
	ft_memset(mem, '\0', (nmemb * size));
	return (mem);
}

/*
	allocates memory for an array of nmemb elements of size bytes
	each and returns a pointer to the allocated memory.
	The memory is set to zero.  If nmemb or size is 0,
    then calloc() returns either NULL
*/