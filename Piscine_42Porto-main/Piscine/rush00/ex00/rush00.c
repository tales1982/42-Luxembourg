/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 16:20:32 by migmarti          #+#    #+#             */
/*   Updated: 2022/09/25 16:25:31 by migmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

// Função para imprimir uma linha lógica
void	ft_print_line(int x, char start_char, char middle_char, char end_char)
{
  ft_putchar(start_char);// Imprime o caractere inicial
	while (x > 2)// Enquanto ainda houver espaço para caracteres do meio
	{
		ft_putchar(middle_char);// Imprime o caractere do meio
		x--; // Decrementa a contagem de caracteres
	}
	if (x > 1)
	{
		ft_putchar(end_char);// Decrementa a contagem de caracteres
	}
	ft_putchar('\n');// Nova linha para finalizar a linha lógica
}

// Função principal para desenhar o padrão
void	rush(int x, int y)
{
	if (x > 0 && y > 0)// Verifica se as dimensões são válidas largura e altura x = horizotal  e y = vertical
	{
		ft_print_line(x, 'o', '-', 'o');// Imprime a linha superior do retângulo
		y--;
		while (y > 1)
		{
			ft_print_line(x, '|', ' ', '|');// Imprime linhas com espaços no meio
			y--;
		}
		if (y > 0)
			ft_print_line(x, 'o', '-', 'o');// Imprime a última linha, se houver mais de uma linha
	}
}
