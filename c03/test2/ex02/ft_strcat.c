/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 13:59:13 by coder             #+#    #+#             */
/*   Updated: 2022/02/12 13:59:13 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*start;

	start = dest;
	while (*start != '\0')
	{
		start++;
	}
	while (*src != '\0')
	{
		*start++ = *src++;
	}
	*start = '\0';
	return (dest);
}

/*
int main()
{
  char src[] = "hello";
  char dest[] = "loco"; 
  ft_strcat(dest, src);
  printf("%s\n%s\n", src, dest);
}
*/