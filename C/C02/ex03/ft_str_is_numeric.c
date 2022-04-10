/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 17:41:48 by arakhurs          #+#    #+#             */
/*   Updated: 2022/02/19 17:44:03 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_numeric(char *str)
{
	char	c;

	c = *str++;
	while (c != '\0')
	{
		if (c < 47 || c > 57)
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

	str_valid = "123456";
	str_invalid = "123A56";
	printf("True	: %d\n", ft_str_is_numeric(str_valid));
	printf("False	: %d\n", ft_str_is_numeric(str_invalid));
}*/
