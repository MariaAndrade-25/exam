/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malves-a <malves-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 16:42:13 by malves-a          #+#    #+#             */
/*   Updated: 2026/09/29 17:02:49 by malves-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	capitalize;

	i = 0;
	capitalize = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (capitalize)
			str[i] = str[i] - 32; // Vira maiúscula
			capitalize = 0; // Já passou a primeira letra da palavra
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (!capitalize)
			str[i] = str[i] + 32; // Vira minúscula se não for o início
			capitalize = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
            capitalize = 0;
		else
			capitalize = 1;
		i++;
	}
	return (str);
}
