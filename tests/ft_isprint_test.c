/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antthoma <antthoma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 01:25:14 by antthoma          #+#    #+#             */
/*   Updated: 2022/06/10 17:19:17 by antthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

// int ft_isprint(int c);

int main()
{
	int c;
   
	// for(c = 1; c <= 127; ++c)
   	// 	if (ft_isprint(c)!= 0)
    // 		printf("%c ", c);
	// printf("\n");

	for(c = 1; c <= 127; ++c)
   		if (isprint(c)!= 0)
    		printf("%c ", c);
	printf("\n");

   return 0;
}
