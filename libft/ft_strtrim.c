/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antthoma <antthoma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 17:18:57 by antthoma          #+#    #+#             */
/*   Updated: 2022/06/25 03:13:30 by antthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_mystrcpy(char *dest, char const *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

static int	ft_count_err(char const *src, char find)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (src[i] != '\0')
	{
		if (src[i] == find)
			count++;
		i++;
	}
	return (count);
}

void	ft_buffcpy_find(char *buff1, char *buff2, char find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (buff1[i] != '\0')
	{
		if (buff1[i] != find)
		{
			buff2[j] = buff1[i];
			j++;
		}
		i++;
	}
	buff2[j] = '\0';
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		errors;
	char	*buffer1;
	char	*buffer2;

	buffer1 = malloc((sizeof(char) * ft_strlen(s1)) + 1);
	buffer2 = malloc((sizeof(char) * ft_strlen(s1)) + 1);
	ft_mystrcpy(buffer2, s1);
	i = 0;
	while (set[i] != '\0')
	{
		free(buffer1);
		buffer1 = malloc((sizeof(char) * ft_strlen(buffer2)) + 1);
		ft_mystrcpy(buffer1, buffer2);
		errors = ft_count_err(buffer1, set[i]);
		free(buffer2);
		buffer2 = malloc((sizeof(char) * ft_strlen(buffer1) - errors) + 1);
		ft_buffcpy_find(buffer1, buffer2, set[i]);
		i++;
	}
	free(buffer1);
	return (buffer2);
}

/*
#include <stdio.h>

int main()
{
	char *name = "   xxxtripouille";
	char *expected = "tripouille";
	char *set = " x";
	char *new_value;

	new_value = ft_strtrim(name, set);
	printf("Expected:%s\n", expected);
	printf("Received:%s\n", new_value);
	printf("Len Expected: %ld - Len Recebido: %ld\n",
	strlen(expected), strlen(new_value));
	free(new_value);
	return (0);
}
*/