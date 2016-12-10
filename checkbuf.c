#include "fillit.h"

int			checkbuf(char *buf)
{
	int		i;
	int		nb_dieses; 
	i = 0;
	nb_dieses = 0;
	while (buf[i] && i < 20)
	{
		if (((buf[i] != '.' && buf[i] != '#') && ((i + 1) % 5) != 0))
			return (-1);
		if (buf[i] != '\n' && ((i + 1) % 5) == 0)
			return (-1);
		if (buf[i] == '#')
			nb_dieses++;
		i++;
	}
	if (nb_dieses != 4 && (buf[i] != '\n' || buf[i] != '\0'))
		return (-1);
	return (putref(buf));
}
