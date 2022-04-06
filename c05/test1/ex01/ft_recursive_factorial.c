/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 18:51:11 by coder             #+#    #+#             */
/*   Updated: 2022/02/16 10:54:25 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 1 || nb == 0)
		return (1);
	if (nb >= 1)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	else
		return (0);
}

/*
int main()
{
 printf("%d", ft_recursive_factorial(5)); 
}
*/