#include <unistd.h>

void rush(int x, int y);
void ft_putchar(char ch);
void ft_genX(int x);
void ft_genY(int y);

int	main(void)
{
	rush(5, 5);
	return (0);
}

void ft_putchar(char ch)
{
	write(1, &ch, 1);
}

void rush(int x, int y)
{
	ft_genX(x);
}

void ft_genX(int x)
{
	int h;
	int c;
	c = 0;
	h = x -2;
	ft_putchar(111);

	while (c < h)
	{
		ft_putchar(45);
		c++;
	}
	ft_putchar(111);
	ft_putchar(10);
}

