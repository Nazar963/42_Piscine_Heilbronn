/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 11:11:08 by coder             #+#    #+#             */
/*   Updated: 2022/02/03 20:15:30 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	test_combination(char counter[])
{
	if (counter[2] > counter[1] && counter[1] > counter[0])
	{
		write(1, &counter[0], 3);
		if (!(counter[0] == '7' && counter[1] == '8' && counter[2] == '9'))
		{
			write(1, ", ", 2);
		}
	}
}

void	ft_print_comb(void)
{
	char	counter[3];

	counter[0] = '0';
	counter[1] = '0';
	counter[2] = '0';
	while (counter[2] <= '9' && counter[1] <= '9' && counter[0] <= '9')
	{
		counter[2]++;
		if (counter[2] > '9')
		{
			counter[2] = '0';
			counter[1]++;
		}
		if (counter[1] == '9')
		{
			counter[2] = '0';
			counter[1] = '0';
			counter[0]++;
		}
		test_combination(counter);
	}
}
