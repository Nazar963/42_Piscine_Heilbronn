/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 16:30:22 by coder             #+#    #+#             */
/*   Updated: 2022/02/14 16:30:22 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rev(int *tab, int i)
{
	i = i - 1;
	while (i >= 0)
	{
		ft_putchar(tab[i] + '0');
		i--;
	}
}

void	ft_putnbr(int nb)
{
	int		a[10];
	long	n;
	int		i;

	i = 0;
	n = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n == 0)
	{
		ft_putchar(nb + '0');
		return ;
	}
	while (n > 0)
	{
		a[i] = n % 10;
		n = n / 10;
		i++;
	}
	ft_rev(a, i);
}
