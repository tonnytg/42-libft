/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antthoma <antthoma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 00:16:51 by antthoma          #+#    #+#             */
/*   Updated: 2022/06/19 01:15:59 by antthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <assert.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size);

int main()
{
	int c;
	int d;
	char *name = "Antonio";
	char value[20] = "abc";
	char *temp = "abcAntonio";

	c = ft_strlcat(value, name, sizeof(name));
	printf("%s - %d\n", value, c);

	d = strlen(name);
	printf("%s - %d\n", name, d);
	assert(*temp == *value);	
}
