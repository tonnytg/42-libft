/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antthoma <antthoma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 01:25:14 by antthoma          #+#    #+#             */
/*   Updated: 2022/06/10 18:08:56 by antthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

// int	ft_strlen(const char *str);

int main(void)
{
	char *name = "Antonio";
	printf("Origin Name: %s\t - Tem: %ld\n", name, strlen(name));
	// printf("Minha Name: %s\t - Tem: %d\n", name, ft_strlen(name));
	return 0;
}
