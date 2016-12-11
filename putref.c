#include "fillit.h"

int		putref(char *buf)
{
	int index;
	int i;

	index = 0;
	i = 0;
	while (i <= 18)
	{
		if (ft_strcmp_f(ft_strchr(g_minos[i], '#'), ft_strchr(buf, '#')) == 0)
			ft_tab_minos(i, index);
			index++;
			return (i);
		i++;
	}
	return (-1);
}

int		ft_tab_minos(int i, int index)
{
	int	tab[27];
	
	tab[index] = i;
}