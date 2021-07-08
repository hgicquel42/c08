#include <unistd.h>
// #include "ft_stock_str.h"

void	ft_putnbr(int n)
{
	char	c;

	if (n >= 10)
		ft_putnbr(n / 10);
	c = '0' + (n % 10);
	write(1, &c, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;
	int	l;

	i = 0;
	while (par[i].str)
	{
		write(1, par[i].str, par[i].size);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		l = 0;
		while (par[i].copy[l])
			l++;
		write(1, par[i].copy, l);
		write(1, "\n", 1);
		i++;
	}
}

// int	main(void)
// {
// 	struct s_stock_str	par[3];

// 	par[0].size = 5;
// 	par[0].str = "hello";
// 	par[0].copy = "world";
// 	par[1].size = 10;
// 	par[1].str = "helloworld";
// 	par[1].copy = "worldhello";
// 	ft_show_tab(par);
// }
