/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antthoma <antthoma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 20:15:28 by antthoma          #+#    #+#             */
/*   Updated: 2022/06/21 21:17:50 by antthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start,size_t len)
{
	size_t	src_count;
	size_t	sub_count;
	char	*sub;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	src_count = 0;
	while (src_count < len && s[start + src_count])
		src_count++;
	sub = (char *) malloc((1 * src_count) + 1);
	sub_count = 0;
	while (sub_count < src_count)
	{
		sub[sub_count] = s[start + sub_count];
		sub_count++;
	}
	sub[sub_count] = '\0';
	return (sub);
}

/*
Parameters
	s: The string from which to create the substring.
	start: The start index of the substring in the
	string ’s’.
	len: The maximum length of the substring.

Return
	value The substring.
	NULL if the allocation fails.

Description
	Allocates (with malloc(3)) and returns a substring
	from the string ’s’.
	The substring begins at index ’start’ and is of
	maximum size ’len’.	
*/