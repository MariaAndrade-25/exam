
#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    int j;
    char c;

    i = 1;
    while (i < ac)
    {
        j = 0;
        while (av[i][j])
        {
            c = av[i][j];
            if(c >= 'A' && c <= 'Z')
                c = c + 32;
            if(av[i][j + 1] == ' ' || av[i][j + 1] == '\t' || av[i][j + 1] == '\0' )
            {
                c = c - 32;
            }
            write(1, &c, 1);
            j++;
        }
        write(1, "\n", 1);
        i++;
    }
    if (ac == 1)
        write(1, "\n", 1);
    return (0);
}