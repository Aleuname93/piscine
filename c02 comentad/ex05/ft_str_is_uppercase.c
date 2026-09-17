/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: econstan <econstan@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 15:22:56 by econstan          #+#    #+#             */
/*   Updated: 2026/09/15 15:30:51 by econstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	i = 0;
	while(str[i])
	{
		if(str[i] >= 65 && str[i] <= 90)
		{
			i++;
		}
		else
		{
			return(0);
		}
	}
	return(1);
}

int	main(void)
{
	printf("%d\n", ft_str_is_uppercase("SREW"));
	printf("%d\n", ft_str_is_uppercase("sdsd"));
	return(0);
}
