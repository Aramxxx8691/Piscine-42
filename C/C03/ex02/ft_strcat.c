/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 22:23:16 by arakhurs          #+#    #+#             */
/*   Updated: 2022/03/10 20:28:54 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	lenght;

	i = 0;
	lenght = 0;
	while (dest[i] != '\0')
	{
		lenght++;
		i++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[lenght + i] = src[i];
		i++;
	}
	dest[lenght + i] = src[i];
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
	printf("c	: %s$\n", strcat(dest, src));
	printf("ft	: %s$\n", ft_strcat(dest2, src));
}*/
