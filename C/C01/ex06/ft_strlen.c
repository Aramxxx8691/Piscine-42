/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 18:20:45 by arakhurs          #+#    #+#             */
/*   Updated: 2022/03/09 13:02:17 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
		while (str[i] != '\0')
	{
		i++;
	}
		return (i);
}

/*int	main(void)
{
	char	str[] = "Hello";

	int	count = ft_strlen(str);

	printf("%d\n", count);
}*/
