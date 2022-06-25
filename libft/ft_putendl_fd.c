/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antthoma <antthoma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 23:44:37 by antthoma          #+#    #+#             */
/*   Updated: 2022/06/24 23:49:19 by antthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	int		i;

	i = 0;
	if (s)
	{
		while (s[i] != '\0')
		{
			write(fd, &s[i], 1);
			i++;
		}
		write(fd, "\n", 1);
	}
}

/*
Function name ft_putendl_fd
	Prototype void ft_putendl_fd(char *s, int fd);
	Turn in files -
Parameters
	Parameters s: The string to output.
	fd: The file descriptor on which to write.
Return
	Return value None
	External functs. write
Description
	Description Outputs the string ’s’ to the given file descriptor
	followed by a newline.
*/