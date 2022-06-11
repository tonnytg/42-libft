/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antthoma <antthoma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 00:32:32 by antthoma          #+#    #+#             */
/*   Updated: 2022/06/07 01:28:42 by antthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memset(void *dest, int val, size_t len)
{
	unsigned char	*ptr;

	ptr = dest;
	while (len-- > 0)
		*ptr++ = val;
	return (dest);
}

/*
	função que recebe alguns parametros, sendo um array,
	um valor a ser setado em todo array e o tamanho a ser percorrido.
	Ela trabalha com void para conseguir receber qualquer tipo de ponteiro.
*/
