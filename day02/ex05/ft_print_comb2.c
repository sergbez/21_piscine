/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osuggs <osuggs@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 00:20:30 by osuggs            #+#    #+#             */
/*   Updated: 2020/03/22 00:20:30 by osuggs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	display(int a)
{
	if (a < 10)
		ft_putchar('0');
	else
		ft_putchar(a / 10 + '0');
	ft_putchar(a % 10 + '0');
}

void	ft_print_comb2(void)
{
	int a;
	int b;
	
	a = 0;
	while (a < 99)
	{	
		b = a + 1;
		while (b < 100)
		{
			display(a);
			ft_putchar(' ');
			display(b);
			if (a != 98)
				ft_putchar(',');
				ft_putchar(' ');
			b++;
		}
		a++;
	}
	ft_putchar('\n');
}