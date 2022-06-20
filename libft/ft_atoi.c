/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antthoma <antthoma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 23:31:58 by antthoma          #+#    #+#             */
/*   Updated: 2022/06/20 23:37:51 by antthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int ft_atoi(const char *nptr)
{
	
	return (0);
}

int main()
{
	char *value1 = "123Antonio";
	int result1 = atoi(value1);
	int result2 = ft_atoi(value1);
	
	printf("atoi: %d\n", atoi(value1));
	printf("ft_atoi: %d\n", ft_atoi(value1));

}
