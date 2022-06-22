/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antthoma <antthoma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 20:52:40 by antthoma          #+#    #+#             */
/*   Updated: 2022/06/21 11:13:24 by antthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*pts;
	unsigned char	cc;

	pts = (void *)s;
	cc = c;
	i = 0;
	while (i < n)
	{
		if ((pts[i] - cc) == 0)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}

/*
  The  memchr()  function  scans the initial n bytes of the memory area pointed to by s for the first instance of c.
  Both c and the bytes of the memory area pointed to by s are inter‐preted as unsigned char.
  memchr() return a pointer to the matching byte or NULL if the character does not occur in the given memory area.
*/