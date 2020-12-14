/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cristiana.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaravan <acaravan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 19:48:55 by acaravan          #+#    #+#             */
/*   Updated: 2020/12/14 21:58:12 by acaravan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		**ft_integerarray(int lines, int cols)
{
	int i;
	int **array;

	i = 0;
	if(!(array = (int **)malloc(sizeof(int *) * lines)))
	{
		write(1, "Memory allocation error", 22);
		exit(-1);
	}
	while (i < lines)
	{
		if(!(array[i] = (int *)malloc(sizeof(int) * col)))
		{
			write(1, "Memory allocation error", 22);
			exit(-1);
		}
		i++;
	}
	return (array);
}

int		**ft_zerone(char **table, char *key, int *dim)
{
	int i;
	int **array;
	
	i = 0;
	j = 0;
	array = ft_integerarray(dim[0], dim[1]);
	while (i < dim[0])
	{
		if (j == dim[1])
		{
			i++;
			j = 0;
			continue;
		}
		else if (table[i][j] == keys[0])
			array[i][j] = 1;
		else if (table[i][j] == keys[1])
			array[i][j] = 0;
		j++;
	}
	return (array);
}

int    **cristiana(int **ptr, int alto, int largo)
{
    int i;
    int j;
    int n1;
    int n2;
    int n3;
    int min;

    i = 1;
    j = 1;
    while(i < alto)
    {
        j = 1;
        while(j < largo)
        {
            if (ptr[i][j] != 0)
            {
                n1 = ptr[i][j - 1];
                n2 = ptr[i - 1][j - 1];
                n3 = ptr[i - 1][j];
                if (n1 < n2)
                    min = n1;
                if (n3 < n1)
                    min = n3;
                if (n2 < n3)
                    min = n2;
                ptr[i][j] = min + 1;
            }
            else
                ptr[i][j] = 0;
            j++;
        }
        i++;
    }
    return (ptr);
}

int main()
{
    int *ptr;
    int ml[6][6] = {{0,1,0,1,1,0},
          {1,0,1,0,1,0},
          {1,1,1,1,1,1},
          {1,0,1,1,1,1},
          {1,1,1,0,1,1},
          {0,1,1,1,1,1}};
    ptr = &ml;
    cristiana(ptr, 5, 5);
}