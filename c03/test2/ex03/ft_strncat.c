/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 09:32:11 by coder             #+#    #+#             */
/*   Updated: 2022/02/14 09:32:11 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	char			*fin;

	fin = dest;
	i = 0;
	while (*fin != '\0')
	{
		fin++;
	}
	while (*src != '\0' && i < nb)
	{
	*fin++ = *src++;
	i++;
	}
	*fin = '\0';
	return (dest);
}

/*
int main()
{
  char src[] = "hello";
  char dest[] = "loco"; 
  ft_strncat(dest, src, 2);
  printf("%s\n%s\n", src, dest);
}
*/