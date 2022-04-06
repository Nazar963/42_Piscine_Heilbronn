/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 16:40:02 by coder             #+#    #+#             */
/*   Updated: 2022/02/07 07:51:50 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	first_line(int *pointer_to_i, int x, char tab[3])
{
	write(1, &tab[1], 1);
	while (*pointer_to_i < x)
	{
		write (1, &tab[0], 1);
		(*pointer_to_i)++;
	}
	if (x != 1)
	{
		write(1, &tab[2], 1);
	}
}

void	ver_l(int *pointer_to_j, int *pointer_to_m, int y, int x, char tab[3])
{
  		while (*pointer_to_j < y)
	{
		write(1, &"\n", 1);
		write(1, &tab[0], 1);
		if (x > 1)
		{
			while (*pointer_to_m < x)
			{
				write(1, " ", 1);
			(*pointer_to_m)++;
			}
		*pointer_to_m = 2;
			write(1, &tab[0], 1);
		}
		(*pointer_to_j)++;
	}
}

void third_line(int *pointer_to_m, int x, int y, char tab[3])
{
  write(1, &"\n", 1);
  if (y != 1)
	{
		write(1, &tab[2], 1);
		while (*pointer_to_m < x)
		{
			write(1, &tab[0], 1);
		(*pointer_to_m)++;
		}
		if (x != 1)
		{
			write(1, &tab[1], 1);
		}
	}
}

void	rush(int x, int y)
{
	int				i;
	int				j;
	int				m;
	char			tab[3];

	tab[0] = 'B';
	tab[1] = 'A';
	tab[2] = 'C';
	i = 2;
	j = 2;
	m = 2;

  int *pointer_to_i;
  pointer_to_i = &i;
  first_line(pointer_to_i, x, tab);

  int *pointer_to_j;
  int *pointer_to_m;
  pointer_to_j = &j;
  pointer_to_m = &m;
  ver_l(pointer_to_j, pointer_to_m, y, x, tab);


	third_line(pointer_to_m, x, y, tab);
}
int main()
{
  rush(7, 7);
  return(0);
}