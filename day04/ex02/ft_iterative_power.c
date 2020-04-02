/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osuggs <osuggs@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 22:55:49 by osuggs            #+#    #+#             */
/*   Updated: 2020/04/01 22:55:49 by osuggs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		result = 0;
	else if (power == 0)
		result = 1;
	result = nb;
	while (power > 1)
	{
		result *= nb;		
		power--;
	}
	return (result);
}