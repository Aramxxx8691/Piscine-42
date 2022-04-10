/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 18:06:16 by arakhurs          #+#    #+#             */
/*   Updated: 2022/02/19 19:52:23 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>

char	*ft_strupcase(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (true)
	{
		c = str[i];
		if (c == '\0')
		{
			break ;
		}
		if (c >= 'a' && c <= 'z')
		{
			str[i] = c - 32;
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	*str_base;
	char	str_upper[6];
	int		i;

	str_base = "heLlO";
	i = 0;
	while (i < 6)
	{
		str_upper[i] = str_base[i] + 0;
		i++;
	}
	ft_strupcase(&str_upper[0]);
	printf("Normal	: %s\n", str_base);
	printf("Upper	: %s\n", str_upper);
}*/
