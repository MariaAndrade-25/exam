
#include <unistd.h>

int get_digit(const char c)
{
	if (c >= '0' && c <= '9')
		return (c - 0);
	if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
}

int ft_atoi_base (const char *str, int str_base)
{
	int i = 0;
	int res = 0;
	int sign = 1;
	int d = 0;

	if (str[i] == '-' && str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign = - 1;
		}
		i++;
	}
	while ((d = get_digit(str[i]) != -1 && d < str_base))
	{
		res = res * str_base + d;
		i++;
	}
	return (res * sign);
}
