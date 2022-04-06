/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 16:40:02 by coder             #+#    #+#             */
/*   Updated: 2022/02/05 16:40:04 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *ch);

static int	g_x;
static int	g_y;
static int	g_i;
static int	g_j;

void	first_line(int *pointer_to_i)
{
	ft_putchar("A");
	while (*pointer_to_i < g_x)
	{
		ft_putchar("B");
		(*pointer_to_i)++;
	}
	if (g_x != 1)
	{
		ft_putchar("C");
	}
}

void	vertical_line(int *pointer_to_j, int *pointer_to_m)
{
	while (*pointer_to_j < g_y)
	{
		ft_putchar("\n");
		ft_putchar("B");
		if (g_x > 1)
		{
			while (*pointer_to_m < g_x)
			{
				ft_putchar(" ");
			(*pointer_to_m)++;
			}
		*pointer_to_m = 2;
			ft_putchar("B");
		}
		(*pointer_to_j)++;
	}
}

void	third_line(int *pointer_to_m)
{
	ft_putchar("\n");
	if (g_y != 1)
	{
		ft_putchar("C");
		while (*pointer_to_m < g_x)
		{
			ft_putchar("C");
		(*pointer_to_m)++;
		}
		if (g_x != 1)
		{
			ft_putchar("A");
		}
	}
}

void	rush(int x, int y)
{
	int				m;
	int				*pointer_to_i;
	int				*pointer_to_j;
	int				*pointer_to_m;

	g_i = 2;
	g_j = 2;
	m = 2;
	g_x = x;
	g_y = y;
	pointer_to_i = &g_i;
	first_line(pointer_to_i);
	pointer_to_j = &g_j;
	pointer_to_m = &m;
	vertical_line(pointer_to_j, pointer_to_m);
	third_line(pointer_to_m);
}
