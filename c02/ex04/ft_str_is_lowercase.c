/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: econstan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 15:02:54 by econstan          #+#    #+#             */
/*   Updated: 2026/09/15 15:22:03 by econstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i = 0;
	while(str[i])
	{
		if(str[i] >= 61 && str[i] <= 122)
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
	printf("%d\n", ft_str_is_lowercase("392093092"));
	printf("%d\n", ft_str_is_lowercase("ASFDF"));
	return(0);
}
