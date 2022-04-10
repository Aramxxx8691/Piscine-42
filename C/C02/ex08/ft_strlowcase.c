/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 18:43:20 by arakhurs          #+#    #+#             */
/*   Updated: 2022/02/19 19:55:12 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	*str_base;
	char	str_lower[6];
	int		i;

	str_base = "heLlO";
	i = 0;
	while (i < 6)
	{
		str_lower[i] = str_base[i] + 0;
		i++;
	}
	ft_strlowcase(&str_lower[0]);
	printf("Normal	: %s\n", str_base);
	printf("Upper	: %s\n", str_lower);
}*/
