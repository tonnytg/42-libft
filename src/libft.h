/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antthoma <antthoma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 22:43:27 by antthoma          #+#    #+#             */
/*   Updated: 2022/06/15 00:31:56 by antthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
	Function:	ft_isalpha

	check character is alphabet
	return 1 to true or 0 to false
*/
int	ft_isalpha(int c);

/*
	Function: ft_isdigit

	check if character is digit
	return 1 to true and 0 to false
*/
int	ft_isdigit(int c);

/*
	Function:  ft_isalnum

	check character is alphabet or number
	return 1 to true or 0 to false
*/
int	ft_isalnum(int c);

/*
	Function: ft_isascii

	check if is ascii character between 0 at 127
	return 1 to true or 0 to false
*/
int	ft_isascii(int c);

/*
	Function: ft_strlen

	count each positon at find NULL and return numbers of letter
	return int with count characters
*/
int	ft_strlen(const char *str);

/*
	Function: memset

	run an array and set value of value each position
	just like calloc but with a customize value
*/	
void	*memset(void *dest, int val, size_t len);

/*
	Function: ft_bzero

	set to pointer with 0 each position
*/
void	ft_bzero(void *s, size_t n);

/*
	Function: ft_memcpy

	copy memory from src to dest but can overlap area.
*/
void *ft_memcpy(void *dest, const void *src, size_t n);

/*
	Function: ft_memmove

	check overlap and after copy
*/
void *ft_memmove (void *dest, const void *src, size_t n)