//
// Created by Antonio Thomacelli on 07/07/22.
//

#include <stdio.h>
#include <assert.h>

void ft_striteri(char *s, void (*f)(unsigned int, char*));

char myfunc(unsigned int a, char b)
{
	printf("%d - %c\n", a, b);
	return (b + 1);
}

int main(int argc, char const *argv[])
{
	const char *p = "123";
	printf("%p|\n", myfunc(p,f));
	return 0;
}

