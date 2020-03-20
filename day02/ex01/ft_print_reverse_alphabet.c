/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 01:23:50 by marvin            #+#    #+#             */
/*   Updated: 2020/03/21 01:23:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



void    ft_putchar(char);

void    ft_print_reverse_alphabet(void)
{
    char    c;

    c = 'z';
    while (c >= 'a')
    {
        ft_putchar(c);
        c--;
    }
    ft_putchar('\n');
}