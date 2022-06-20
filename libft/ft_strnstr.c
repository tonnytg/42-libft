/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antthoma <antthoma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 22:38:36 by antthoma          #+#    #+#             */
/*   Updated: 2022/06/20 23:26:23 by antthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*buffer;

	if (ft_strlen(little) < 1)
		return ((char *)big);
	while (len--)
	{
		if (*big == *little)
		{
			buffer = (char *)big;
			return ((char *)buffer);
		}
		big++;
	}
	return (0);
}

/*
	Return:
		If little is an empty string, big is returned; if little occurs nowhere in
     	big, NULL is returned; otherwise a pointer to the first character of the
     	first occurrence of little is returned.
*/