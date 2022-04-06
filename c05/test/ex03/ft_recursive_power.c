/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 21:40:00 by coder             #+#    #+#             */
/*   Updated: 2022/02/14 21:40:00 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power < 1 || nb == 1)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

/*
int main()
{
 printf("%d", ft_recursive_power(10, 0)); 
}
*/