/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antthoma <antthoma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 23:24:37 by antthoma          #+#    #+#             */
/*   Updated: 2022/06/25 00:03:06 by antthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
Function name ft_putchar_fd
	Prototype void ft_putchar_fd(char c, int fd);
	Turn in files -
Parameters	
	Parameters c: The character to output.
	fd: The file descriptor on which to write.
Return	
	Return value None
	External functs. write
Description	
	Description Outputs the character ’c’ to the given file
	descriptor.
*/