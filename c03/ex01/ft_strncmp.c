/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: econstan <econstan@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 14:41:52 by econstan          #+#    #+#             */
/*   Updated: 2026/09/17 17:08:29 by econstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while(i < n && s1[i] == s2[i] && s1[i])
	{
		i++;
	}
	if(i == n)
	{
		return (0);
	}
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}

int	main(void)
{
	char	s1[] = "abc";
	char	s2[] = "adc";

	printf("cmp: %d", ft_strncmp(s1, s2, 2));
	printf(" e %d", ft_strncmp(s1, s2, 2));
	return (0);
}
