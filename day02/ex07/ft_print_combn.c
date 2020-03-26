/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osuggs <osuggs@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 17:27:46 by osuggs            #+#    #+#             */
/*   Updated: 2020/03/22 17:27:46 by osuggs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	display(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		ft_putchar(a[i] + '0');
		i++;
	}
	if (a[0] < (10 - n))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	a[10];

	i = 0;
	while (i < n)
	{	
		a[i] = i;
		i++;
	}
	while (a[0] <= (10 - n))
	{
		display(a, n);
		i = n - 1;
		a[i]++;
		while (i > 0)
		{			
			if (a[i] > 9)
			{
				a[i]++;
				if (a[i] < 10 - n + i)
				{					
					while (i < n - 1)
					{
						a[i + 1] = a[i] + 1;
						i++;
					}
				}
			}
			i--;
		}		
	}
	ft_putchar('\n');
}