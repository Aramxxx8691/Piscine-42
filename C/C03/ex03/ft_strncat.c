/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:33:43 by arakhurs          #+#    #+#             */
/*   Updated: 2022/02/21 18:21:17 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[i] != '\0' && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	*str_base;
	char	dest[100];
	char	dest2[100];
	char	*src;
	int		i;

	str_base = "Hello";
	src = " World";
	i = 0;
		while (i < 6)
	{
		dest[i] = str_base[i];
		dest2[i] = str_base[i];
		i++;
	}
	printf("c	: %s$\n", strncat(dest, src, 4));
	printf("ft	: %s$\n", ft_strncat(dest2, src, 4));
}*/
