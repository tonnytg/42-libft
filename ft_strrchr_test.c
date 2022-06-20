/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antthoma <antthoma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 04:11:57 by antthoma          #+#    #+#             */
/*   Updated: 2022/06/19 16:10:49 by antthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>
#include <assert.h>

char *ft_strrchr(const char *s, int c);

int main()
{
	char *name = "Antonio";
	char *temp1 = ft_strrchr(name, 'n');	
	char *temp2 = strrchr(name, 'n');	
	assert(temp1 == temp2);
	printf("Temp1: %s == Temp2: %s\n", temp1, temp2);

	char *temp3 = ft_strrchr(name, 'v');	
	char *temp4 = strrchr(name, 'v');	
	assert(temp3 == temp4);
	printf("Temp3: %s == Temp4: %s\n", temp3, temp4);	
}