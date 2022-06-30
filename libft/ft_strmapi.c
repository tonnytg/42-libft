/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antthoma <antthoma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 23:16:03 by antthoma          #+#    #+#             */
/*   Updated: 2022/06/30 03:54:44 by antthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*str;

	str = ft_strdup(s);
	if (!str)
		return (NULL);
	i = 0;
	while (str[i])
	{
		str[i] = f(i, str[i]);
		i++;
	}
	return (str);
}

/*
Function name ft_strmapi
	Prototype char *ft_strmapi(char const *s, char (*f)(unsigned
	int, char));
	Turn in files -
Parameters	
	Parameters s: The string on which to iterate.
	f: The function to apply to each character.
	Return value The string created from the successive applications
	of ’f’.
Returns	
	Returns NULL if the allocation fails.
	External functs. malloc
Description	
	Description Applies the function ’f’ to each character of the
	string ’s’, and passing its index as first argument
	to create a new string (with malloc(3)) resulting
	from successive applications of ’f’.
*/