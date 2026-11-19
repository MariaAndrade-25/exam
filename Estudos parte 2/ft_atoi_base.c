
#include <stdio.h>

static int get_digit(char c)
{
    if( c >= '0' && c <= '9')
        return ( c - '0');
    if( c >= 'a' && c <= 'f')
        return (c - 'a' + 10);
    if (c >= 'A' && c <= 'F')
        return (c - 'A' + 10); 
    return (-1);
}

int ft_atoi_base(const char *str, int str_base)
{
    int i = 0;
    int res = 0;
    int sign = 1;
    int d = 0;

    while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if(str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
        {
            sign = - 1;
        }
        i++;
    }
    while((d = get_digit(str[i])) != -1 && d < str_base)
    {
        res = res * str_base + d;
            i++;
    }
    return(res * sign);
}

int main(void)
{
    printf("%d (esperado 255)\n", ft_atoi_base("ff", 16));
    printf("%d (esperado -5)\n",  ft_atoi_base("-101", 2));
    printf("%d (esperado 7)\n",   ft_atoi_base("7Z", 16));
    printf("%d (esperado 1)\n",   ft_atoi_base("189", 8));
    printf("%d (esperado 0)\n",   ft_atoi_base("", 10));
    return (0);
}

