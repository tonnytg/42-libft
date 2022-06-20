/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antthoma <antthoma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 20:52:40 by antthoma          #+#    #+#             */
/*   Updated: 2022/06/19 20:53:05 by antthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				i;
	unsigned char	temp_c;
	unsigned char	temp_n;
	char		*buffer;

	temp_c = c;
	temp_n = n;
	i = 0;
	while (*(char *)s != '\0' && i < n)
	{
		if (*(char *)s == temp_c)
		{
			buffer = (char *)s;
			return ((void *)buffer);
		}
		s++;
		i++;
	}
	return (0);
}

/*
  The  memchr()  function  scans the initial n bytes of the memory area pointed to by s for the first instance of c.
  Both c and the bytes of the memory area pointed to by s are inter‐preted as unsigned char.
  memchr() return a pointer to the matching byte or NULL if the character does not occur in the given memory area.
*/