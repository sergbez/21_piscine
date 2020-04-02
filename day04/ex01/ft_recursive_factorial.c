/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osuggs <osuggs@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/31 00:41:38 by osuggs            #+#    #+#             */
/*   Updated: 2020/03/31 00:41:38 by osuggs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int factorial;

	if (nb < 0 || nb > 12)
		factorial = 0;
	else if (nb > 1)
		factorial = nb * ft_recursive_factorial(nb - 1); 
	else
		factorial = 1;
	return(factorial);
}