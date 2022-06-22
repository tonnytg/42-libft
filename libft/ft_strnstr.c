/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antthoma <antthoma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 22:38:36 by antthoma          #+#    #+#             */
/*   Updated: 2022/06/21 18:38:45 by antthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strnstr(const char *big, const char *little, size_t len)
// {
// 	char	*buffer;

// 	if (ft_strlen(little) < 1)
// 		return ((char *)big);
// 	while (len--)
// 	{
// 		if (*big == *little)
// 		{
// 			buffer = (char *)big;
// 			return ((char *)buffer);
// 		}
// 		big++;
// 	}
// 	return (0);
// }

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	little_len;

	i = 0;
	little_len = ft_strlen(little);
	if (!little_len)
		return ((char *)big);
	if (n != 0)
	{
		while (big[i] && i <= n - little_len)
		{
			j = 0;
			while (little[j] && little[j] == big[i + j])
				j++;
			if (j == little_len)
				return ((char *)&big[i]);
			i++;
		}
	}
	return (NULL);
}


/*
	Return:
		If little is an empty string, big is returned; if little occurs nowhere in
     	big, NULL is returned; otherwise a pointer to the first character of the
     	first occurrence of little is returned.
*/