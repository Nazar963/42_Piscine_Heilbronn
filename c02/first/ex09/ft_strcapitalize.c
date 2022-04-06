/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:40:29 by coder             #+#    #+#             */
/*   Updated: 2022/02/10 11:40:29 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_nolet(char c)
{
	if ((c < 'A' || c > 'Z' ) && (c < 'a' || c > 'z'))
		return (1);
	else
		return (0);
}

int	ft_nonum(char c)
{
	if (c < '0' || c > '9' )
		return (1);
	else
		return (0);
}

int	ft_islet(char c)
{
	if ((c >= 'A' || c <= 'Z' ) && (c >= 'a' || c <= 'z'))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_nolet(str[i]))
			i++;
		else if (ft_nolet(str[i - 1]) && ft_nonum(str[i - 1]))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
			}
		i++;
		}
		else if (ft_islet(str[i - 1]))
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] += 32;
			}
		i++;
		}
	}
	return (str);
}
