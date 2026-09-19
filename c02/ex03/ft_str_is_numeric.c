/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: econstan <econstan@studen.42lisboa.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 14:46:51 by econstan          #+#    #+#             */
/*   Updated: 2026/09/15 14:58:57 by econstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	i = 0;
	while(str[i])
	{
		if(str[i] >= 48 && str[i] <= 57)
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
//	char	*str = "";
//	ft_str_is_numeric(str);
	printf("%d\n", ft_str_is_numeric(""));
	printf("%d\n", ft_str_is_numeric("dfs"));
}
