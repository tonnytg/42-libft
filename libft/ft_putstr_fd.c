/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antthoma <antthoma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 23:39:21 by antthoma          #+#    #+#             */
/*   Updated: 2022/06/25 03:11:54 by antthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
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
	}
}

/*

	Function name ft_putstr_fd
	Prototype void ft_putstr_fd(char *s, int fd);
	Turn in files -
	Parameters s: The string to output.
	fd: The file descriptor on which to write.
	Return value None
	External functs. write
	Description Outputs the string ’s’ to the given file
	descriptor.

*/
