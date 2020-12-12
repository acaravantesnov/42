/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaravan <acaravan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 16:48:06 by acaravan          #+#    #+#             */
/*   Updated: 2020/12/12 13:52:53 by acaravan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int count;

	count = 1;
	if (nb == 1)
		return (1);
	if (nb == 4)
		return (2);
	while (count < (nb / 2))
	{
		if ((count * count) == nb)
			return (count);
		count++;
	}
	return (0);
}
