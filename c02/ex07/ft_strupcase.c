/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: econstan <econstan@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 14:41:41 by econstan          #+#    #+#             */
/*   Updated: 2026/09/16 17:54:40 by econstan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;
	i = 0;
	while(str[i])
	{
		if(str[i] >= 97 && str[i] <= 122)// se for maior que 'a' E menor que 'z' .
		{
			str[i] = str[i] - 32; // o indice da string comeca com menos 32 na tabela ascii.
		}
		i++;
	}
	return(str); // retorna char, no caso str
}

int	main(void)
{
	char	i[] = "fsfse"; // variavel string = frase aleatoria
	printf("%s", ft_strupcase(i)); // chamar a direcao da string, chama novamente a funcao
	return(0); //convencao da 42 .
}
