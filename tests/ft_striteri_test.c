//
// Created by Antonio Thomacelli on 07/07/22.
//

#include <stdio.h>
#include <assert.h>

void ft_striteri(char *s, void (*f)(unsigned int, char*));

char myfunc(unsigned int a, char b)
{
	printf("%d + %c", a, b);
	return (b + a);
}

int main(int argc, char const *argv[])
{
	char f = 97;
	int p = 2;
	printf(" = %c\n", myfunc(p,f));
	return 0;
}

