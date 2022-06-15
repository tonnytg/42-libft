/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antthoma <antthoma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 12:39:43 by antthoma          #+#    #+#             */
/*   Updated: 2022/06/13 21:56:46 by antthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	return ((c >= 97 && c <= 122)
		|| (c >= 65 && c <= 90));
}

/*
	Function:	ft_isalpha

	check character is alphabet
	return 1 to true or 0 to false
*/