/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antthoma <antthoma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 08:05:25 by antthoma          #+#    #+#             */
/*   Updated: 2022/06/07 08:12:14 by antthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// void	*strlcpy(void *dest, int val, size_t len)
size_t	strlcpy(char *dst, const char *src, size_t size)
{
	int i;
	
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}	
}
