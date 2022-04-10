/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 18:49:10 by arakhurs          #+#    #+#             */
/*   Updated: 2022/02/20 21:26:33 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		k;
	char	b;

	i = 0;
	k = 1;
	while (str[i])
	{
		b = str[i];
		if (k == 1 && b >= 'a' && b <= 'z')
			str[i] -= 32;
		else if (k == 0 && b >= 'A' && b <= 'Z')
			str[i] += 32;
		if (b < '0' || (b > '9' && b < 'A') || (b > 'Z' && b < 'a') || b > 122)
			k = 1;
		else
			k = 0;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	*str_base;
	char	str_cap[36];
	int		i;

	str_base = "hello world ? 42mots all";
	i = 0;
	while (i < 37)
	{
		str_cap[i] = str_base[i] + 0;
		i++;
	}
	ft_strcapitalize(&str_cap[0]);
	printf("%s\n", str_cap);
}*/
