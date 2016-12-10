#include "fillit.h"

int		putref(char *buf)
{
	int i;

	i = 0;
	while (i <= 18)
	{
		if (ft_strcmp_f(ft_strchr(g_minos[i], '#'), ft_strchr(buf, '#')) == 0)
			return (i);
		i++;
	}
	return (-1);
}
