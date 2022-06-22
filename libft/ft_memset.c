/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antthoma <antthoma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 00:32:32 by antthoma          #+#    #+#             */
/*   Updated: 2022/06/21 02:40:35 by antthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
  unsigned char *ptr = s;
  while (n-- > 0)
    *ptr++ = c;
  return ptr;
}

/*
	Function: memset

	run an array and set value on each position
*/