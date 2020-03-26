/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osuggs <osuggs@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 20:21:34 by osuggs            #+#    #+#             */
/*   Updated: 2020/03/21 20:21:34 by osuggs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char);

void	ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}