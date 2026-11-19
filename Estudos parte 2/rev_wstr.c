/*Exercício: rev_wstr

Arquivo esperado: rev_wstr.c
Funções permitidas: write, malloc, free

Escreva um programa que receba uma string como parâmetro e imprima suas palavras em ordem inversa.

Uma “palavra” é um trecho da string delimitado por espaços (ou tabs) ou pelo início/fim da string.

Se o número de parâmetros for diferente de 1, o programa imprime só \n.

Nos testes, não haverá espaços extras no começo ou no fim da string, e as palavras sempre estarão separadas por exatamente um espaço.

Exemplos:

$> ./rev_wstr "le temps du mintaka" | cat -e
mintaka du temps le$
$> ./rev_wstr "he stared at the mountain" | cat -e
mountain the at stared he$
$> ./rev_wstr "" | cat -e
$
$> ./rev_wstr | cat -e
$
*/

#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    int j = 0;

    if (ac == 2)
    {
        while(av[1][i])
            i++;
        while(i >= 0)
        {
            if (i == 0 || av[1][i - 1] == ' ' || av[1][i - 1] == '\t' || av[1][i - 1] == '\n')
            {
                j = i;
                while(av[1][j] && av[1][j] != ' ' && av[1][j] != '\t' && av[1][j] != '\n')
                {
                    write(1,&av[1][j], 1);
                    j++;
                }
                if (i != 0)
                    write (1, " ", 1);
            }
            i--;
        }
    }
    write(1, "\n", 1);
    return (0);
}
