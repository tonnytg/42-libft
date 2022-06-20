/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antthoma <antthoma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 02:29:25 by antthoma          #+#    #+#             */
/*   Updated: 2022/06/19 16:06:11 by antthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrchr(const char *s, int c)
{
	char	ch;
	char	*temp;

	ch = c;
	temp = 0;
	while (*s != '\0')
	{
		if (*s == ch)
		{
			temp = (char *)s;			
		}
		s++;
	}
	return (temp);
}

/*
 The ft_strrchr() function returns a pointer
 to the last occurrence of the character c in the  strings.
*/