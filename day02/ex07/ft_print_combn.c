/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osuggs <osuggs@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/27 22:41:16 by osuggs            #+#    #+#             */
/*   Updated: 2020/03/27 22:41:16 by osuggs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_combn(int n)
{
    int a[9];
    int i;

    i = 0;
    n = 9;
    while (i < n)
    {
        a[i] = i;
        i++;
    }
    while (a[0] <= 10 - n)
    {
        i = 0;
        while (i < n)
        {
            ft_putchar(a[i] + '0');
            i++;
        }
        if (a[0] < 10 - n)
        {
            ft_putchar(',');
            ft_putchar(' ');
        }
        if (a[0] == 10 - n)
            break;
        i = n - 1;
        a[i]++;
        if (a[i] > 9)
        {
            i--;
            while (i >= 0)
            {
                if (a[i] < 10 - n + i)
                {
                    a[i]++;
                    while (i < n - 1)
                    {
                        a[i + 1] = a[i] + 1;
                        i++;
                    }
                    break;
                }
                i--;
            }
        }
    }
}