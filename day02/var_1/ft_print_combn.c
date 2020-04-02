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
	if (a[0] <= (10 - n))
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
	i--;
	while (a[0] <= (10 - n))
	{
		while (i >= 0)
        {
            display(a, n);
            a[i]++;
            if (a[i] > 9)
            {
                a[i - 1]++;
                a[i] = a[i - 1] + 1;
            }
        }
        i--;
	}
	ft_putchar('\n');
}
