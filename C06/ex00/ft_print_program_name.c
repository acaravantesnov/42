/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaravan <acaravan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 13:04:06 by acaravan          #+#    #+#             */
/*   Updated: 2020/12/11 10:46:14 by acaravan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;
	int elementos;

	i = 0;
	elementos = 0;
	while (str[i] != '\0')
	{
		i++;
		elementos++;
	}
	return (elementos);
}

int	main(int argc, char **argv)
{
	int i;

	(void)argc;
	(void)argv;
	i = 0;
	while (i < ft_strlen(*argv))
	{
		write(1, &argv[0][i], 1);
		i++;
	}
}
