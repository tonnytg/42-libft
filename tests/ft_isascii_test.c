/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antthoma <antthoma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 01:16:29 by antthoma          #+#    #+#             */
/*   Updated: 2022/06/10 18:29:15 by antthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int ft_isascii(int c);

int main(void)
{
	// printf("ft_isascii: %d\n", ft_isascii('1'));
	printf("isascii: %d\n", isascii('1'));
	printf("isascii: %d\n", ft_isascii('1'));
}
