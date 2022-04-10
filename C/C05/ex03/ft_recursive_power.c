/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 21:23:13 by arakhurs          #+#    #+#             */
/*   Updated: 2022/02/23 21:28:54 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power_recursive(int number, int power, int result)
{
	if (power-- > 0)
		return (ft_recursive_power_recursive(number, power, result *= number));
	return (result);
}

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	return (ft_recursive_power_recursive(nb, power, 1));
}

int	main(void)
{
	printf("0^0 = %d\n", ft_recursive_power(0, 0));
}
