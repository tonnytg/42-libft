/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antthoma <antthoma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 21:54:24 by antthoma          #+#    #+#             */
/*   Updated: 2022/07/01 23:34:58 by antthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digits(unsigned int n);
static int	is_negative(int n);

char	*ft_itoa(int n)
{
	char			*str;
	int				len;
	int				negative;
	unsigned int	nb;

	nb = n;
	negative = is_negative(n);
	if (negative)
		nb = n * (-1);
	len = digits(nb) + negative;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len--)
	{
		str[len] = (nb % 10) + '0';
		nb /= 10;
	}
	if (negative)
		str[0] = '-';
	return (str);
}

static int	is_negative(int n)
{
	return (n < 0);
}

static int	digits(unsigned int n)
{
	if (n < 10)
		return (1);
	return (digits(n / 10) + 1);
}
