#include "fillit.h"

int		main(int argc, char **argv)
{
	char	buf[21 + 1];
	int		fd;
	int		retread;
	int		tmp;

	if (argc != 2)
	{
		ft_putstr("usage: fillit input_file\n");
		return (1);
	}
	else
	{
		if (!(fd = open(argv[1], O_RDONLY)))
		{
			ft_putstr("error\n");
			return (0);
		}
		while ((retread = read(fd, &buf, 21)))
		{
			if (checkbuf(buf) == -1)
			{
				ft_putstr("error\n");
				return (0);
			}
			tmp = retread;
			ft_bzero(buf, 22);
		}
		if (tmp != 21)
		{
			ft_putstr("error\n");
			return (0);
		}
		ft_putstr("OK\n");
	}
	return (0);
}
