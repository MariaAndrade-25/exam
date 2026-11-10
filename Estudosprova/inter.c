
#include <unistd.h>

int main (int ac, char **av)
{
	int seen[256] = {0};
	int i = 0;
	int j;

	if (ac == 3)
	{
		j = 0;
		while (av[1][i])
		{
			if (av[1][i] == av[2][j] && seen[(unsigned char)av[1][i]] == 0)
			{
				write(1, &av[1][i], 1);
				seen[(unsigned char)av[1][i]] = 1;
			}
			j++;
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}

