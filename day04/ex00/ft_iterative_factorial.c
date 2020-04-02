/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osuggs <osuggs@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/30 23:00:36 by osuggs            #+#    #+#             */
/*   Updated: 2020/03/30 23:00:36 by osuggs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int factorial;

	if (nb < 0 || nb > 12)
		return(0);
	i = 2;
	factorial = 1;
	while (i <= nb)
	{
		factorial *= i; 
		i++;
	}
	return(factorial);
}