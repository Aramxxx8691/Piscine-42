/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 17:56:30 by arakhurs          #+#    #+#             */
/*   Updated: 2022/02/20 21:20:07 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int	ft_str_is_printable(char *str)
{
	int		i;
	char	c;
	bool	valid;

	i = 0;
	valid = true;
	while (true)
	{
		c = str[i];
		if (c == '\0')
		{
			break ;
		}
		if (!(c >= ' ') || c == 127)
		{
			valid = false;
			break ;
		}
		i++;
	}
	return (valid);
}

/*int	main(void)
{
	char	*str_valid;
	char	*str_invalid;

	str_valid = "HellO";
	str_invalid = "hello\7F";
	printf("True	: %d\n", ft_str_is_printable(str_valid));
	printf("False	: %d\n", ft_str_is_printable(str_invalid));
}*/
