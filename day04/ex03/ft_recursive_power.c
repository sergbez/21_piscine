/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osuggs <osuggs@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 00:01:40 by osuggs            #+#    #+#             */
/*   Updated: 2020/04/02 00:01:40 by osuggs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	if (power < 0)
		result = 0;
	else if (power == 0)
		result = 1;
	else
		result = nb * ft_recursive_power(nb, power - 1);
	return (result);
}