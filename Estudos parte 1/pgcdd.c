#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{	
	int i;
	int j;
	int temp = 0;

	if (ac == 3)
	{
		j = atoi(av[1]);
		i = atoi(av[2]);
		while (j != 0)
		{
			temp = i % j;
			i = j;
			j = temp;
		}
		write(1, &i, 1);
	}
	write (1,"\n", 1);
	return (0);
}
