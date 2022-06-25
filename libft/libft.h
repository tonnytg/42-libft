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
	ft_isalpha is a character
*/
int	ft_isalpha(int c);

/*
	ft_isprint is a function that checks if a character is printable. 
*/
int	ft_isprint(int c);

/*
	ft_tolower is a function that converts a character to lowercase.
*/
int	ft_tolower(int c);

/*
	ft_isdigit is a function that checks if a character is a digit.
*/
int	ft_isdigit(int c);

/*
	ft_toupper is a function that converts a character to uppercase.
*/
int	ft_toupper(int c);

/*
	ft_isalnum is a function that checks if a character is alphanumeric.
*/
int	ft_isalnum(int c);

/*
	ft_isascii is a function that checks if a character is an ASCII character.
*/
int	ft_isascii(int c);

/*
	ft_strlen is a function that returns the length of a string.
*/
size_t	ft_strlen(const char *s);

/*
	ft_memset is a function that fills memory with a constant byte. 
*/	
void	*ft_memset(void *s, int c, size_t n);

/*
	ft_bzero is a function that fills memory with zeros.
*/
void	ft_bzero(void *s, size_t n);

/*
	ft_memcpy is a function that copies memory.
*/
*/
void *ft_memcpy(void *dest, const void *src, size_t n);

/*
	ft_memmove is a function that copies memory.
*/
*/
void *ft_memmove (void *dest, const void *src, size_t n);

/*
	ft_strchr is a function that locates a character in a string.
*/
char *ft_strchr(const char *s, int c);

/*
	ft_strdup is a function that duplicates a string.
*/
size_t	ft_strdump(const char *s);

/*
	ft_strlcat is a function that concatenates two strings.
*/
size_t	ft_strlcat(char *dst, const char *src, size_t size);

/*
	ft_strlcpy is a function that copies a string.
*/
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

/*
	ft_strnstr is a function that locates a substring.	
*/
char	*ft_strnstr(const char *big, const char *little, size_t len);

/*
	ft_strrchr is a function that locates a character in a string.
*/
char *ft_strrchr(const char *s, int c);

/*
	ft_strncmp is a function that compares two strings.
*/
int ft_strncmp(const char *s1, const char *s2, size_t n);

/*
	ft_memchr is a function that locates a character in a string.
*/
void	*ft_memchr(const void *s, int c, size_t n);

/*
	ft_memcmp is a function that compares two strings.
*/
int ft_memcmp(const void *s1, const void *s2, size_t n);

/*
	ft_atoi is a function that converts a string to an integer.
*/
int	ft_atoi(const char *nptr);

/*
	ft_calloc is a function that allocates memory for an array with zeros.
*/
void	*ft_calloc(size_t count, size_t size);

/*
	ft_strdup is a function that duplicates a string.
*/
char	*ft_strdup(const char *str);

/*
	ft_substr is a function that extracts a substring.
*/
char	*ft_substr(char const *s, unsigned int start,size_t len);
