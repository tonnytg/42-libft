/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antthoma <antthoma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 23:47:44 by antthoma          #+#    #+#             */
/*   Updated: 2022/06/14 23:52:14 by antthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

int main()
{
	char *value1 = "Antonio";
	char value2[sizeof(value1)];

	printf("value2: %s\n", value2);
	ft_memcpy(value2, value1, sizeof(value1));
	printf("value1: %s\n", value1);
	printf("value2: %s\n", value2);
}