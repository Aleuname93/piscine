/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: econstan <econstan@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 10:38:11 by econstan          #+#    #+#             */
/*   Updated: 2026/09/16 16:15:46 by econstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i = 0;// indice para percorrer a string via array
	while(str [i] != '\0')// enquanto o indice percorrer a string e nao encontrar o null terminator
	{
		if(str[i] >= 41 && str[i] <= 90 || str[i] >= 61 && str[i] <= 122)// se for maior ou igual a 41 que na tabela ascii eh 'A' E menor ou igual a 'Z'.
		{
			i++; //incrementa um ate o fim da string
		}
		else
		{
			return(0);//encontrou caractere nao alfabetico? retorna 0 .
		}
	}
	return(1); // percorreu toda string e sem ecnontrar caracter invalido? retorna 1 .
}

int	main(void)
{
	printf("%d\n", ft_str_is_alpha("")); // retorna o especificador de formato que espera um valor int, nesse caso vai ser verdadeiro, retorna 1 .
	printf("%d\n", ft_str_is_alpha("2332")); //como nesse caso esta fora do intervalo alfabetico que eu dei retorna 0 .
}
