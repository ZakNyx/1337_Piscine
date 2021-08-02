#include "../ex05/ft_show_tab.c"
#include "ft_strs_to_tab.c"
#ifndef FT_STOCK_STR_H

# define FT_STOCK_STR_H
# include "ft_stock_str.h"
#endif

int main (int ac, char **av)
{
	t_stock_str *test;
	test = ft_str_to_tab(ac, av);
	ft_show_tab(test);
	free(test);
	return (0);
}
