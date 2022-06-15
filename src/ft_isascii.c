/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antthoma <antthoma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 01:13:51 by antthoma          #+#    #+#             */
/*   Updated: 2022/06/13 21:59:06 by antthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	return (((unsigned char)c <= 127));
}

/*
	Function: ft_isascii

	check if is ascii character between 0 at 127
	return 1 to true or 0 to false
*/