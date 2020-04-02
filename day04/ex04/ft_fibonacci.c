/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osuggs <osuggs@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 00:25:42 by osuggs            #+#    #+#             */
/*   Updated: 2020/04/02 00:25:42 by osuggs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	fib;

	if (index < 0 || index > 46)
		fib = -1;
	else if (index == 0)
		fib = 0;
	else if (index <= 2)
		fib = 1;	
	else
		fib = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (fib);
}