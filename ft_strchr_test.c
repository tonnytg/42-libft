/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antthoma <antthoma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 04:11:57 by antthoma          #+#    #+#             */
/*   Updated: 2022/06/19 04:14:35 by antthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>
#include <assert.h>

char *ft_strchr(const char *s, int c);

int main()
{
	char *name = "Antoino";
	char *temp1 = ft_strchr(name, 'o');	
	char *temp2 = strchr(name, 'o');	
	assert(temp1 == temp2);
	printf("Temp1: %s == Temp2: %s\n", temp1, temp2);
}