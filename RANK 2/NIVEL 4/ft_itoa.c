#include <unistd.h>

int get_len(int nbr )
{
	int len = 0;
	if (nrb <= 0)
		len++;
	while (nbr != 0)
	{
		len++;
		nbr = nbr / 10;
	}
	return (len);
}

char *ft_itoa(int nbr)
{
	char *result;
	int len;
	long nb;

	nb = nbr;
	len = get_len(nbr);
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[len] = '\0'
	if (nbr < 0)
	{
		result[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		result[0] = '0';	
	while (nbr <= 0)
	{
		len--;
		result[len] = (nb % 10) + '0';
		nb = nb / 10;
	}
		return (result);
	}
