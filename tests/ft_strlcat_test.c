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
	int a;
	int b;
	char *name = "Antonio";
	char value[11] = "abc";
	char *expected = "abcAntonio";

	a = ft_strlcat(value, name, 11);
	printf("%s - %d\n", value, a);

	b = strlen(name);
	printf("%s - %d\n", name, b);
	b = strlen(value);
	printf("%s - %d\n", value, b);
	assert(*expected == *value);

	char *name2 = "Antonio";
	char value2[11] = "abc";
	char *expected2 = "abcAntonio";

	a = strlcat(value2, name2, 11);
	printf("%s - %d\n", value2, a);

	b = strlen(name2);
	printf("%s - %d\n", name2, b);
	b = strlen(value2);
	printf("%s - %d\n", value2, b);
	assert(*expected2 == *value);
}
