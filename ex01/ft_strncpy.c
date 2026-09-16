/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: econstan <econstan@studeny.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 15:45:16 by econstan          #+#    #+#             */
/*   Updated: 2026/09/15 10:37:32 by econstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned	int	i; //representa apenas valores positivos
	i = 0;
	while(i < n && src[i] != '\0')//looping, i menor que n E a localizacao for  diferente de nulo.
	{
		dest[i] = src [i];//o destino recebe a fonte
		i++;// incrementando mais um ate acabar  a funcao
	}
	return(dest);// retorna destino
}

int	main(void)
{
	char src[] = "Hello, World!";// o colchete vazio para evitar definir o tamanho da string manual
	char dest[50];//aqui para evitar overflow atribuo um tamanho maior

	ft_strncpy(dest, src, 5);//chamo novamente a funcao com dest, char e o valor da int
	printf("%s", dest);//quero o valor de s(string) do  destino
	return (0);
}
