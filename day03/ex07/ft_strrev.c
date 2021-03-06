/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osuggs <osuggs@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/28 10:17:48 by osuggs            #+#    #+#             */
/*   Updated: 2020/03/28 10:17:48 by osuggs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		i;
	int		n;
	int		m;
	char	c;

	i = 0;
	while(str[i] != '\0')
		i++;
	i--;
	m = i / 2;
	n = 0;
	while(i > m)
	{
		c = str[i];
		str[i] = str[n];
		str[n] = c;
		i--;
		n++;
	}
	return(str);
}