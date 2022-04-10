/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 17:36:10 by arakhurs          #+#    #+#             */
/*   Updated: 2022/02/19 19:37:05 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_lowercase(char *str)
{
	char	c;

	c = *str++;
	while (c != '\0')
	{
		if (c < 97 || c > 122)
			return (0);
		c = *str++;
	}
	return (1);
}

/*int	main(void)
{
	char	*str_valid;
	char	*str_invalid;

	str_valid = "hello";
	str_invalid = "hellO";
	printf("True	: %d\n", ft_str_is_lowercase(str_valid));
	printf("False	: %d\n", ft_str_is_lowercase(str_invalid));
}*/
