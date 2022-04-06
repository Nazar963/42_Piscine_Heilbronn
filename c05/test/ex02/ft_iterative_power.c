/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 21:34:12 by coder             #+#    #+#             */
/*   Updated: 2022/02/14 21:34:12 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
		return (0);
	if (power == 1)
		return (1);
	while (power != 0)
	{
		res = res * nb;
		power--;
	}
	return (res);
}

/*
int main()
{
 printf("%d", ft_iterative_power(5, 5)); 
}
*/