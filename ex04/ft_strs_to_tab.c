#include <stdlib.h>
// #include "ft_stock_str.h"

char	*ft_strdup(char *src)
{
	int		l;
	int		i;
	char	*dest;

	l = 0;
	while (src[l])
		l++;
	dest = malloc((l + 1) * sizeof(char));
	if (!dest)
		return (0);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int			i;
	int			l;

	tab = malloc((ac + 1) * sizeof(t_stock_str));
	if (!tab)
		return (0);
	i = 0;
	while (i < ac && av[i])
	{
		l = 0;
		while (av[l])
			l++;
		tab[i].size = l;
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[i].size = 0;
	tab[i].str = 0;
	tab[i].copy = 0;
	return (tab);
}

// int	main(int argc, char **argv)
// {
// 	ft_strs_to_tab(argc, argv);
// }