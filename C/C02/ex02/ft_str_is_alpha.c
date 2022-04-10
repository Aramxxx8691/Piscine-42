/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 17:26:31 by arakhurs          #+#    #+#             */
/*   Updated: 2022/03/09 18:01:46 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_alpha(char *str)
{
	int		n;
	char	c;

	n = 1;
	c = *str++;
	while (c != '\0')
	{
		if (c < 65 || (c > 90 && c < 97) || c > 122)
		{
			n = 0;
			return (n);
		}
		c = *str++;
	}
	return (n);
}

/*int	main(void)
{
	char	*str_valid;
	char	*str_invalid;

	str_valid = "Hello";
	str_invalid = "Hell0";
	printf("True	: %d\n", ft_str_is_alpha(str_valid));
	printf("False	: %d\n", ft_str_is_alpha(str_invalid));
}*/
