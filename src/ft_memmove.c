/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antthoma <antthoma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 23:52:54 by antthoma          #+#    #+#             */
/*   Updated: 2022/06/15 04:46:56 by antthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
	int	i;
	char *buffer;

	i = 0;
	while (i < n)
	{
		buffer[i] = *((char *)src ++);
		i++;
	}
	i = 0;
	while (i < n)
	{
		*((char *)dest + i) = buffer[i];
		i++;
	}	
	return (dest);
}

/*
	A função memmove() copia n bytes da área de memória src
	para a área de memória dest.
	
	As áreas de memória podem se sobrepor:
	a cópia ocorre como se os bytes em src fossem
	primeiro copiado em um array temporário
	que não se sobreponha a src ou dest,
	e os bytes são então copiados do array temporário para dest.
*/