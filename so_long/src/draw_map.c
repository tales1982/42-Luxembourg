/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 18:22:21 by tlima-de          #+#    #+#             */
/*   Updated: 2024/06/01 11:01:55 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	draw_map(t_data *data)
{
	int	y;
	int	x;

	y = 0;
	while (y < data->map_height)
	{
		x = 0;
		while (x < data->map_width)
		{
			if (data->map[y][x] == 1)
				mlx_put_image_to_window(data->mlx, data->win, data->img_wall, x
					* TILE_SIZE, y * TILE_SIZE);
			else if (data->map[y][x] == 0)
				mlx_put_image_to_window(data->mlx, data->win, data->img_floor, x
					* TILE_SIZE, y * TILE_SIZE);
			else if (data->map[y][x] == 2)
				mlx_put_image_to_window(data->mlx, data->win,
					data->img_collectible, x * TILE_SIZE, y * TILE_SIZE);
			else if (data->map[y][x] == 3)
				mlx_put_image_to_window(data->mlx, data->win, data->img_exit, x
					* TILE_SIZE, y * TILE_SIZE);
			else if (data->map[y][x] == 4)
			{
				mlx_put_image_to_window(data->mlx, data->win, data->img_floor, x
					* TILE_SIZE, y * TILE_SIZE);
				mlx_put_image_to_window(data->mlx, data->win,
					data->img_player_current, x * TILE_SIZE, y * TILE_SIZE);
				data->x = x * TILE_SIZE;
				data->y = y * TILE_SIZE;
			}
			x++;
		}
		y++;
	}
}

/*
A função draw_map percorre a matriz data->map,
	desenhando imagens de parede ou chão em cada
posição na janela do jogo,
	de acordo com os valores presentes na matriz. Usa a biblioteca
MiniLibX para colocar as imagens na janela do jogo,
	formando a visualização completa do mapa.
*/
