/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ascii.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 13:18:40 by tales             #+#    #+#             */
/*   Updated: 2024/09/08 13:29:52 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

void print_ascii(void)
{
   printf("\033[1;32m");  // Cor verde
    printf("*************************************************************************\n");
    printf("*  __  __  _____  _   _  _____   _____  _    _  ______  _       _     	*\n");
    printf("* |  \\/  ||_   _|| \\ | ||_   _| / ____|| |  | ||  ____|| |     | |	*\n");
    printf("* | \\  / |  | |  |  \\| |  | |  | (___  | |__| || |__   | |     | |   	*\n");
    printf("* | |\\/| |  | |  | . ` |  | |   \\___ \\ |  __  ||  __|  | |     | |  	*\n");
    printf("* | |  | | _| |_ | |\\  | _| |_  ____) || |  | || |____ | |____ | |____	*\n");
    printf("* |_|  |_||_____||_| \\_||_____||_____/ |_|  |_||______||______||______|	*\n");
    printf("*************************************************************************	\n");
    printf("\033[1;34m");  // Cor azul
    printf("*                        by Filipe, Tales                             * *\n");
    printf("*************************************************************************\n");
    printf("\033[0m");  // Resetar cor
}