#ifndef FILLIT_H
# define FILLIT_H

# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>//penser a effacer
# include "./libft/libft.h"

typedef struct			s_minos
{
	char				letter;
	int					x1;
	int					x2;
	int					x3;
	int					x4;
	int					y1;
	int					y2;
	int					y3;
	int					y4;
	struct s_minos		*next;
}						t_minos;

static char g_minos[19][21] = {
	"##..\n##..\n....\n....\n",
	"####\n....\n....\n....\n",
	"#...\n#...\n#...\n#...\n",
	"##..\n.##.\n....\n....\n",
	"#...\n##..\n.#..\n....\n",
	".##.\n##..\n....\n....\n",
	".#..\n##..\n#...\n....\n",
	"###.\n#...\n....\n....\n",
	"#...\n#...\n##..\n....\n",
	"..#.\n###.\n....\n....\n",
	"##..\n.#..\n.#..\n....\n",
	"###.\n..#.\n....\n....\n",
	"##..\n#...\n#...\n....\n",
	"#...\n###.\n....\n....\n",
	".#..\n.#..\n##..\n....\n",
	"###.\n.#..\n....\n....\n",
	"#...\n##..\n#...\n....\n",
	".#..\n###.\n....\n....\n",
	".#..\n##..\n.#..\n....\n",};

static int	g_coord[19][8] = {
	{0, 0, 1, 0, 0, 1, 1, 1},
	{0, 0, 1, 0, 2, 0, 3, 0},
	{0, 0, 0, 1, 0, 2, 0, 3},
	{0, 0, 1, 0, 1, 1, 2, 1},
	{0, 0, 0, 1, 1, 1, 1, 2},
	{1, 0, 2, 0, 0, 1, 1, 1},
	{1, 0, 0, 1, 1, 1, 0, 2},
	{0, 0, 1, 0, 2, 0, 0, 1},
	{0, 0, 0, 1, 0, 2, 1, 2},
	{2, 0, 0, 1, 1, 1, 2, 1},
	{0, 0, 1, 0, 1, 1, 1, 2},
	{0, 0, 1, 0, 2, 0, 2, 1},
	{0, 0, 1, 0, 0, 1, 0, 2},
	{0, 0, 0, 1, 1, 1, 2, 1},
	{1, 0, 1, 1, 0, 2, 1, 2},
	{0, 0, 1, 0, 2, 0, 1, 1},
	{0, 0, 0, 1, 1, 1, 0, 2},
	{1, 0, 0, 1, 1, 1, 2, 1},
	{1, 0, 0, 1, 1, 1, 1, 2}};

void					ft_lstaddback(t_list **alst, t_list *new);
int						checkbuf(char *buf);
t_minos					fillit(t_minos *minos, char letter);
int						putref(char *buf);
int						ft_strcmp_f(const char *s1, const char *s2);

#endif
