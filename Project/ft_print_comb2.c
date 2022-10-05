/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakirha <abakirha@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 20:15:22 by abakirha          #+#    #+#             */
/*   Updated: 2022/07/26 16:45:18 by abakirha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_if(int a, int b)
{
	char	onluk;
	char	birlik;
	char	comma;
	char	space;

	space = ' ';
	comma = ',';
	if (b > a)
	{
		onluk = (a / 10) + '0';
		birlik = (a % 10) + '0';
		write(1, &onluk, 1);
		write(1, &birlik, 1);
		write(1, &space, 1);
		onluk = (b / 10) + '0';
		birlik = (b % 10) + '0';
		write(1, &onluk, 1);
		write(1, &birlik, 1);
		if (!(a == 98 && b == 99))
		{
			write(1, &comma, 1);
			write(1, &space, 1);
		}
	}
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;

	a = 0;
	while (a < 99)
	{
		b = 0;
		while (b < 100)
		{
			ft_if(a, b);
			b++;
		}
		a++;
	}
}
