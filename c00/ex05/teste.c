/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: econstan <econstan@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 13:25:51 by econstan          #+#    #+#             */
/*   Updated: 2026/09/09 09:18:33 by econstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char p, char o, char m)
{
	write(1, &p, 1);
	write(1, &o, 1);
	write(1, &m, 1);
}

void	ft_print_comb(void)
{
	char	p;
	char	o;
	char	m;

	p = '0';
	while (p <= '7')
	{
		o = p + 1;
		while (o <= '8')
		{
			m = o + 1;
			while (m <= '9')
			{
				ft_write(p, o, m);
				if (!(p =='7' && o == '8' && m == '9'))
				{
					write (1, ", ", 2);
				}
				m++;
			}
			o++;
		}
		p++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
