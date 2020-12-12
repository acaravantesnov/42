/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaravan <acaravan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 10:52:47 by acaravan          #+#    #+#             */
/*   Updated: 2020/12/12 13:56:06 by acaravan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int		i;
	float	x;

	i = 2;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	if (ft_is_prime(i) == 1)
	{
		while (i < nb)
		{
			if (nb % i == 0)
				return (0);
			else
			{
				x = nb / i;
				if (x < 1)
					return (1);
			}
			i++;
		}
	}
	return (1);
}

int main(){
	int x = ft_is_prime(6);
	printf("%i",x);
}