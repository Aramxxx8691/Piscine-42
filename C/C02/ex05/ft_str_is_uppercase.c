/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 17:44:55 by arakhurs          #+#    #+#             */
/*   Updated: 2022/02/19 22:01:31 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_uppercase(char *str)
{
	char	c;

	c = *str++;
	while (c != '\0')
	{
		if (c < 65 || c > 90)
		{
			return (0);
		}
		c = *str++;
	}
	return (1);
}

/*int	main(void)
{
	char	*str_valid;
	char	*str_invalid;

	str_valid = "HELLO";
	str_invalid = "Hello";
	printf("True	: %d\n", ft_str_is_uppercase(str_valid));
	printf("False	: %d\n", ft_str_is_uppercase(str_invalid));
}*/
