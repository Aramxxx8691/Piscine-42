/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 18:41:33 by arakhurs          #+#    #+#             */
/*   Updated: 2022/02/18 17:30:05 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	b;

	a = 0;
	while (a < size / 2)
	{
		b = tab[a];
		tab[a] = tab[size - 1 - a];
		tab[size - 1 - a] = b;
		a++;
	}
}

/*void	putarr(int arr[], int size)
{
	for(int i=0; i < (size - 1); i++)
		printf("%d, ", arr[i]);
	printf("%d\n", arr[size - 1]);
}

int	main(void)
{
	int	tab[] = {1, 2, 3, 4};
	int	size;

	size = 4;

	printf("Original: ");
	putarr(tab, size);

	ft_rev_int_tab(tab, size);

	printf("Modified: ");
	putarr(tab, size);
}*/
