#include <stdio.h>
#include <assert.h>

void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);


int main() {
	ft_putchar_fd('A', 1);
	ft_putstr_fd("t", 1);
	ft_putendl_fd("t", 1);
	ft_putnbr_fd(653345,2);
	return (0);
}