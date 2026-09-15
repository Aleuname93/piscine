/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: econstan <econstan@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 10:04:04 by econstan          #+#    #+#             */
/*   Updated: 2026/09/14 15:44:48 by econstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{	
	int	i;//indice
	i = 0;
	while(src[i] != '\0' )//enquanto a localizacao for menor que nulo
	{
		dest[i] = src[i];// destiny recebe source
		i++;// incremento
	}
	dest[i] = '\0';// quando o dest receber nulo
	return dest;// retorna o dest
}
/*
int	main(void)
{
	char	src[] = "Hello"; //src recebe a string Hello
	char	dest[30]; // buffer que evita um overflow
	ft_strcpy(dest, src);// chamando a funcao novamente
	printf("say %s", dest);// o que aparece para mim
	return (0);// boas praticas da 42
}*/
