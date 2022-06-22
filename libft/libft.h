/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antthoma <antthoma@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 22:43:27 by antthoma          #+#    #+#             */
/*   Updated: 2022/06/21 20:19:20 by antthoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdlib.h>

/*
	Function:	ft_isalpha

	check character is alphabet
	return 1 to true or 0 to false
*/
int	ft_isalpha(int c);

/*

*/
int	ft_isprint(int c);

/*

*/
int	ft_tolower(int c);

/*
	Function: ft_isdigit

	check if character is digit
	return 1 to true and 0 to false
*/
int	ft_isdigit(int c);

/*

*/
int	ft_toupper(int c);

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
size_t	ft_strlen(const char *s);

/*
	Function: memset

	run an array and set value of value each position
	just like calloc but with a customize value
*/	
void	*ft_memset(void *s, int c, size_t n);

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
void *ft_memmove (void *dest, const void *src, size_t n);

/*

*/
char *ft_strchr(const char *s, int c);

/*

*/
size_t	ft_strdump(const char *s);

/*

*/
size_t	ft_strlcat(char *dst, const char *src, size_t size);

/*
	Function: ft_strlcpy

	copy char from src to dst and check size
	return count letters
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

/*
	
*/
char	*ft_strnstr(const char *big, const char *little, size_t len);

/*

*/
char *ft_strrchr(const char *s, int c);

/*

*/
int ft_strncmp(const char *s1, const char *s2, size_t n);

/*

*/
void	*ft_memchr(const void *s, int c, size_t n);

/*

*/
int ft_memcmp(const void *s1, const void *s2, size_t n);

/*

*/
int	ft_atoi(const char *nptr);

/*

*/
void	*ft_calloc(size_t count, size_t size);

/*

*/
char	*ft_strdup(const char *str);

/*

*/
char	*ft_substr(char const *s, unsigned int start,size_t len);
