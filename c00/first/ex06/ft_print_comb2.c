/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 15:09:51 by coder             #+#    #+#             */
/*   Updated: 2022/02/02 15:09:51 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(char x, char y)
{
	char	counter[2];

	counter[0] = x;
	counter[1] = y + 1;
	while (counter[0] <= '9')
	{
		while (counter[1] <= '9')
		{
			ft_putchar(x);
			ft_putchar(y);
			ft_putchar(' ');
			ft_putchar(counter[0]);
			ft_putchar(counter[1]);
			if (x != '9' || y != '8' || counter[0] != '9' || counter[1] != '9')
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			counter[1]++;
		}
		counter[0]++;
		counter[1] = '0';
	}
}

void	ft_print_comb2(void)
{
	char	counter[2];

	counter[0] = '0';
	counter[1] = '0';
	while (counter[0] <= '9')
	{
		counter[1] = '0';
		while (counter[1] <= '9')
		{
			if (counter[0] != '9' || counter[1] <= '8')
			{
				ft_print_comb(counter[0], counter[1]);
			}
			counter[1]++;
		}
		counter[0]++;
	}
}
