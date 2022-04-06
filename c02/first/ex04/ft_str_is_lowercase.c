/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 20:13:33 by coder             #+#    #+#             */
/*   Updated: 2022/02/09 20:13:33 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int		i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] >= 'a' && str[i] <= 'z')
	{
	i++;
		if (str[i] == '\0')
		{
			return (1);
		}
	}
	return (0);
}
