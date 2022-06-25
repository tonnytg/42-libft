/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antthoma <antthoma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 23:19:58 by antthoma          #+#    #+#             */
/*   Updated: 2022/06/24 23:22:49 by antthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*
Function name ft_striteri
	Prototype void ft_striteri(char *s, void (*f)(unsigned int,
	char*));
	Turn in files -
Parameters
	Parameters s: The string on which to iterate.
	f: The function to apply to each character.
Return	
	Return value None
	External functs. None
Description
	Description Applies the function ’f’ on each character of
	the string passed as argument, passing its index
	as first argument. Each character is passed by
	address to ’f’ to be modified if necessary.
*/