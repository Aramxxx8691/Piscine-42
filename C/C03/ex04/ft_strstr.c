/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:43:43 by arakhurs          #+#    #+#             */
/*   Updated: 2022/02/21 17:05:04 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*dez;
	char	*asex;

	if (*to_find == '\0')
		return (str);
	dez = str;
	asex = to_find;
	while (true)
	{
		if (*asex == '\0')
			return ((char *)(dez - (asex - to_find)));
		if (*dez == *asex)
			asex++;
		else
			asex = to_find;
		if (*dez == '\0')
			break ;
		dez++;
	}
	return (NULL);
}

/*int	main(void)
{
	char	*dez;
	char	*asex;
	char	*result_c;
	char	*result_ft;

	dez = "Foo Bar Baz";
	asex = "Bar";
	result_c = strstr(dez, asex);
	result_ft = ft_strstr(dez, asex);
	printf("%p / %p\n", result_c, result_ft);
	printf("c : %s$\n", result_c);
	printf("ft : %s$\n", result_ft);
}*/
