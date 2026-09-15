/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: econstan <econstan@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 14:36:26 by econstan          #+#    #+#             */
/*   Updated: 2026/09/14 18:21:34 by econstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	h;

	h = *a;
	*a = *b;
	*b = h;
}
/*
int	main(void)
{
	int	a = 8;
	int	b = 5;
	ft_swap(&a, &b);
	printf("%d, %d",b, a);
	return (0);
}*/
