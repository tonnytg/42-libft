/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antthoma <antthoma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 23:52:54 by antthoma          #+#    #+#             */
/*   Updated: 2022/06/15 02:35:50 by antthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
void ft_memmove (char *dest, char *src)
{
	printf("dest: %s\n", dest);
	printf("src: %s\n", src);
	// return (0);
}

int main()
{
	char *value1 = "Antonio";
	char *value2;
	
	ft_memmove(value2, value1);
	printf("value2: %s\n", *value2);
}