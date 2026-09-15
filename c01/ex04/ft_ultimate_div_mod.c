/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: econstan <econstan@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/12 12:00:11 by econstan          #+#    #+#             */
/*   Updated: 2026/09/14 09:28:42 by econstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	i;
	int	h;

	i = *a;
	h = *b;
	*a = i / h;
	*b = i % h;
}
/*
int	main(void)
{
	int	u = 5;
	int	g = 8;
	ft_ultimate_div_mod(&u, &g);
	printf("%d, %d", u, g);
	return (0);
}*/
