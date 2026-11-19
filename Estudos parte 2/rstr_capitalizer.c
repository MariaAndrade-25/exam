#include <unistd.h>

void	rstr_capitalizer(char *s)
{
	int		i = 0;
	char	c;

	
}

int	main(int ac, char **av)
{
	int	j = 1;
    int i = 0;

	if (ac >= 1)
	{
        while (a[j][i])
	    {
		    if (a[j][i] >= 'A' && a[j][i] <= 'Z')
			    a[j][i]+= 32;
		    if (ca[j][i] >= 'a' && c <= 'z'
			    && (s[i + 1] == ' ' || s[i + 1] == '\t' || s[i + 1] == '\0'))
			    c -= 32;
		    write(1, &c, 1);
		    i++;
	    }
	return (0);
    write(1, "\n", 1);
}
