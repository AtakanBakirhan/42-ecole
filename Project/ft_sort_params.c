/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirha <abakirha@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 18:43:14 by abakirha          #+#    #+#             */
/*   Updated: 2022/08/08 22:37:02 by abakirha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *a)
{
	int	i;

	i = 0;
	while (a[i] != '\0')
	{
		write(1, &a[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	int		i;
	int		j;
	char	*tmp;

	if (1 < ac)
	{
		i = 0;
		while (++i < ac)
		{
			j = i;
			while (++j < ac)
			{
				if (ft_strcmp(av[i], av[j]) > 0)
				{
					tmp = av[i];
					av[i] = av[j];
					av[j] = tmp;
				}
			}
		}
		i = 0;
		while (++i < ac)
			ft_putstr(av[i]);
	}
}
