/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osuggs <osuggs@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/29 21:49:15 by osuggs            #+#    #+#             */
/*   Updated: 2020/03/29 21:49:15 by osuggs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(char *str)
{
	int i;
	int nbr;
	int neg;
	
	i = 0;
	nbr = 0;
	neg = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
	str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '-')
	{
		neg = 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr *= 10;
		nbr += str[i] - '0';
		if (i == 9)
		{
			i++;
			if (neg == 1 && str[i] >= '8')
				nbr = -2147483648;
			else if (neg == 0 && str[i] >= '7')
				nbr = 2147483647;
			else
			{
				nbr *= 10;
				nbr += str[i] - '0';
			}
		}
		if (i == 10 && neg == 1)
		{
			nbr = -2147483648;
			break;
		}
		if (i == 10 && neg == 0)
		{
			nbr = 2147483647;
			break;
		}
		i++;
	}
	if (neg == 1)
		nbr *= -1;
	return(nbr);
}