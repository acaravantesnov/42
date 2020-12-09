/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaravan <acaravan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 16:36:11 by acaravan          #+#    #+#             */
/*   Updated: 2020/12/09 16:50:25 by acaravan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb != 1)
		return (nb * ft_recursive_factorial(nb - 1));
	else if (nb == 1)
		return (1);
	return (0);
}
