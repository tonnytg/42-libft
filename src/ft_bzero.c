/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antthoma <antthoma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 22:47:44 by antthoma          #+#    #+#             */
/*   Updated: 2022/06/14 16:41:32 by antthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	if (n == 0)
		return ;
	i = 0;
	while (i < n)
	{
		*((char *)s + i) = 0;
		i++;
	}
}

/*
	Function: ft_bzero

	set to pointer with 0 each position
*/

#include <stdio.h>
#include <assert.h>

int main()
{
	int		i;
	char	values[15];

	i = 0;
	while (i < 15)
	{
		printf("position: %d - value: %d\n", i, values[i]);
		i++;
	}
	ft_bzero(values, sizeof(values));
	i = 0;
	while (i < 15)
	{
		printf("position: %d - value: %d\n", i, values[i]);
		assert(values[i] == 0);
		i++;
	}
}