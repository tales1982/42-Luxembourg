/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 18:09:57 by tales             #+#    #+#             */
/*   Updated: 2024/08/18 18:26:16 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../main.h"

void	ft_print_numbers(void)
{
	int	i;

	i = 48;         // '0' in ascii
	while (i <= 57) // '9' in ascii
	{
		write(1, &i, 1);
		// ft_putchar(i);
		i++;
	}
}
