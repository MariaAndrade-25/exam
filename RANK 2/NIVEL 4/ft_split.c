
#include <stdlib.h>

static int is_sep(char c) 
{
    if (c == '\t' || c == ' ' || c == '\n') /*verifico se é separador*/
        return(1);
    else
        return(0);
}
static int count_words(char *str) 
{
    int i = 0;
    int count = 0;
    int in_word = 0 ;

    while (str[i])
    {
        if (!is_sep(str[i]) && in_word == 0) /*verifico se é uma palavra*/
        {
            count++;
            in_word = 1;
        }
        else if (is_sep(str[i]))
            in_word = 0;
        i++;
    }
    return(count);
}

char **ft_split(char *str)
{
    char **res;
    int n, i, k, start, j;

    n = count_words(str);
    res = malloc(sizeof(char *) * (n + 1)); /*verifico se consigo alocar*/
    if (!res)
        return (NULL);
    i = 0;
    k = 0;
    while (k < n) /* sei os numeros de palavras e vou andar por ele*/
    {
        while(is_sep(str[i]))/*se for separador vou andar*/
            i++;
        start = 1;
        while (str[i] && !is_sep(str[i])) /*se encontrei uma palavra ando por ela*/
            i++;
        res[k] = malloc (i - start + 1); /*preciso gravar o start para voltar para o começo da palavra*/
        if(!res)
            return(0);
        j = 0;
        while (start - i)
        {
            res[k][j] = start; /*res recebe a palavra*/
            j++;
            start++;
        }
        res[k][j] = '\0'; /*adiciono ao final do null*/
        k++;
    }
    res[k] = NULL;
    return (res);
}
