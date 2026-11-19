static int count_words(char const *s, char c)
{
    int i = 0;
    while(*s)
    {
        while(*s == c)
            s++;
        if(*s)
            i++;
        while(*s && *s != c)
            s++;
    }
    return(i);
}
char **ft_split(char const *s, char c)
{
    int i = 0;
    int len = count_words(s);
    char *result;

    while(s[i])
        i++;
    len = i;
    result = malloc(sizeof(char) * (len + 1)); 
    if(!result)
        return(0);
    while(s[i] != '\0')
    {
        if(s[i] == c)
        {
    
        }
    }
    
}