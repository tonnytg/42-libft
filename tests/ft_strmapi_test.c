//
// Created by Antonio Thomacelli on 07/07/22.
//

#include <stdio.h>
#include <assert.h>
#include <string.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char myfunc(unsigned int a, char b)
{
	printf("%d - %c\n", a, b);
	return (b + 1);
}

int    main()
{
	char    s1[] = "abc";
	char    *s2;
	char *expected = "bcd";
	s2 = ft_strmapi(s1, *myfunc);
	printf("%s\n", s2);
	assert(strcmp(s2, expected) == 0);
	free(s2);
}