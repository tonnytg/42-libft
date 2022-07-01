/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antthoma <antthoma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 23:31:58 by antthoma          #+#    #+#             */
/*   Updated: 2022/07/01 23:34:28 by antthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c);

int	ft_atoi(const char *nptr)
{
	int	total;
	int	sign;

	sign = 1;
	total = 0;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign *= (-1);
		nptr++;
	}
	while (ft_isdigit(*nptr))
		total = *(nptr++) - '0' + (total * 10);
	return (total * sign);
}

static int	ft_isspace(char c)
{
	return (c == 32 || (c >= 9 && c <= 13));
}
