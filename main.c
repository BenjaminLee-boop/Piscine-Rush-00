#include <unistd.h>

void rush(int x, int y);
void ft_putchar(char ch);
void ft_genX(int x);
void ft_genY(int y);

int	main(void)
{
	rush(54, 10);
	return (0);
}

void ft_putchar(char ch)
{
	write(1, &ch, 1);
}

void rush(int x, int y)
{
	int counter = 0;
	ft_genX(x);
	
	if(y == 2)
	{
	ft_genX(x);
	}

	else
	{
	while(counter < y - 2)
	{
	ft_genY(x);
	counter++;
	}
	}
	
	if(x > 1)
	ft_genX(x);
	
}
void ft_genX(int x)
{
	int h;
	int c;
	c = 0;
	h = x -2;
	if (h >= 2)
	{
	ft_putchar(111);
	}

	while (c < h)
	{
		ft_putchar(45);
		c++;
	}
	
	
	if(x > 1)
	{
	    ft_putchar(111);
	}
	ft_putchar(10);
}


void ft_genY(int x)
{
	int h;
	int c;
	c = 0;
	h = x -2;
	ft_putchar(124);

	while (c < h)
	{
		ft_putchar(32);
		c++;
	}
	ft_putchar(124);
	ft_putchar(10);
}
