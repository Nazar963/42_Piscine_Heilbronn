/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 22:27:55 by coder             #+#    #+#             */
/*   Updated: 2022/02/13 22:27:55 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(int argc, char **argv)
{
	int		numbers[16];
	int		i;
	int		j;

	numbers[16] = change_to_numb (*argv[1]);
	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			argv[i][j] = 0;
			j++;
		}
		i++;
	}
}

int	*change_to_numb(char *argv)
{
	int		*numbers;
	int		i;
	int		j;

	numbers = (int *) malloc (sizeof (int) * 16);
	if (!numbers)
		return (0);
	i = 0;
	j = 0;
	while (argv[i] != '\0')
	{
		if (argv[i] >= '0' && argv[i] <= '9')
		{
			argv[i] = number[j];
			j++;
		}
		i++;
	}
	return (numbers);
}
