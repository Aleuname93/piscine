/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: econstan <econstan@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 10:20:36 by econstan          #+#    #+#             */
/*   Updated: 2026/09/17 17:07:39 by econstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	
	i = 0;
	while(s1[i] == s2[i] && s1[i])
	{
		i++;
	}
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}

int	main(void)
{
	char	s1[] = "abc";
	char	s2[] = "adv";
	
	printf("cmp: %d", ft_strcmp(s1, s2));
	printf(" e %d", ft_strcmp(s1, s2));
	return (0);
}
