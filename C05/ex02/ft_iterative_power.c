/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaravan <acaravan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 16:37:49 by acaravan          #+#    #+#             */
/*   Updated: 2020/12/09 16:50:36 by acaravan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int result;

	i = 1;
	result = 1;
	if ((nb == 0) && (power == 0))
		return (1);
	else
	{
		while (i <= power)
		{
			result *= nb;
			i++;
		}
	}
	return (result);
}
