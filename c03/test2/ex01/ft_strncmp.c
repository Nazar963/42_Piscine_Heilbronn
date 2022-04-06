/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 13:52:09 by coder             #+#    #+#             */
/*   Updated: 2022/02/12 13:52:09 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int		i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && (n - 1) > 0)
	{
		if (s1[i] != s2[i])
			break ;
	i++;
	n--;
	}
	return (s1[i] - s2[i]);
}

/*
int main()
{
  printf("%d ", ft_strncmp("helwlo", "hello", 3));
}
*/