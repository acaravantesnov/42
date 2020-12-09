/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaravan <acaravan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 11:33:38 by acaravan          #+#    #+#             */
/*   Updated: 2020/12/07 10:50:53 by acaravan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		counter(int nb);
void extra(int nb, int numb);

void	ft_putnbr(int nb)
{
	int		cont;
	int		numb;
	int		numb2;
	char	n[counter(nb)];

	cont = -1;
	numb = nb;
	extra(nb, numb);
	if ((numb < 0) && (numb != -2147483648))
	{
		write(1, "-", 1);
		numb2 = numb * (-1);
		numb = numb2;
	}
	while (numb > 0)
	{
		cont++;
		n[cont] = ((numb % 10) + 48);
		numb /= 10;
	}
	while (cont != -1)
	{
		write(1, &n[cont], 1);
		cont--;
	}
}

int		counter(int nb)
{
	int numb2;
	int numb3;
	int cont;

	numb2 = nb;
	cont = 0;
	if (numb2 < 0)
	{
		numb3 = numb2 * (-1);
		numb2 = numb3;
	}
	while (numb2 > 0)
	{
		numb2 /= 10;
		cont++;
	}
	return (cont);
}

void	extra(int nb, int numb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		numb = 0;
	}
}
