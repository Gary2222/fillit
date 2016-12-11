#include "fillit.h"

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putstr("usage: fillit input_file\n");
		return (0);
	}
	else
	{
		if (ft_minos(argv[1]) == -1)
		{
			ft_putstr("error\n");
			return(0);
		}
	}
	ft_putstr("OK\n");
	return (0);
}