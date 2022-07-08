//
// Created by Antonio Thomacelli on 07/07/22.
//

#include <stdio.h>
#include <ctype.h>
#include <assert.h>

int	ft_toupper(int ch);

int main(void)
{

	printf("%c\n", toupper('c'));
	printf("%c\n", ft_toupper('c'));
	assert(toupper('c') == ft_toupper('c'));
}