/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 18:57:09 by arakhurs          #+#    #+#             */
/*   Updated: 2022/02/19 22:09:43 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	c;
	unsigned int	i;

	c = 0;
	i = 0;
	while (src[c] != '\0')
		c++;
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (c);
}

/*int	main(void)
{
	char	*string1;
	char	string2[2];

	string1 = "Hello";
	printf("base	: %s\n", string1);
	strlcpy(string2, string1, 1);
	printf("cpy c	: %s\n", string2);
	ft_strlcpy(string2, string1, 1);
	printf("cpy ft	: %s\n", string2);
}*/
