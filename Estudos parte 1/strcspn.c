
Reproduce exactly the behavior of the function strcspn
(man strcspn).

The function should be prototyped as follows:

static int is_reject(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t i = 0;

	while (s[i] && !is_reject(s[i], reject))
		i++;
	return (i);
}
