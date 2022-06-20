/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antthoma <antthoma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 00:16:51 by antthoma          #+#    #+#             */
/*   Updated: 2022/06/19 00:24:24 by antthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <assert.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

int main()
{
	int c;
	int d;
	char *name = "Antonio";
	char value[20];

	c = ft_strlcpy(value, name, sizeof(name));
	printf("%s - %d\n", value, c);

	d = strlen(name);
	printf("%s - %d\n", name, c);
	assert(c == d);
	assert(*name == *value);
}
