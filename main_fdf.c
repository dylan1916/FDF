/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etordjma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 01:07:58 by etordjma          #+#    #+#             */
/*   Updated: 2018/12/16 03:03:11 by etordjma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		deal_key(int key, void	*param)
{
	ft_putchar('X');
	return (0);
}

int		main()
{
	void	*mlx_ptr;
	void	*win_ptr;
	int		draw;

	mlx_ptr = mlx_init();
	win_ptr = mlx_new_window(mlx_ptr, 800, 550, "mlx 42");
	draw = mlx_pixel_put(mlx_ptr, win_ptr, 300, 440, 18725551);
	draw = mlx_pixel_put(mlx_ptr, win_ptr, 301, 441, 18725551);
	draw = mlx_pixel_put(mlx_ptr, win_ptr, 302, 442, 18725551);
	draw = mlx_pixel_put(mlx_ptr, win_ptr, 303, 443, 18725551);
	draw = mlx_pixel_put(mlx_ptr, win_ptr, 304, 444, 18725551);
	draw = mlx_pixel_put(mlx_ptr, win_ptr, 305, 445, 18725551);
	draw = mlx_pixel_put(mlx_ptr, win_ptr, 306, 446, 18725551);
	draw = mlx_pixel_put(mlx_ptr, win_ptr, 307, 447, 18725551);
	draw = mlx_pixel_put(mlx_ptr, win_ptr, 308, 448, 18725551);
	draw = mlx_pixel_put(mlx_ptr, win_ptr, 309, 449, 18725551);
	draw = mlx_pixel_put(mlx_ptr, win_ptr, 310, 450, 18725551);
	draw = mlx_pixel_put(mlx_ptr, win_ptr, 311, 451, 18725551);
	draw = mlx_pixel_put(mlx_ptr, win_ptr, 312, 452, 18725551);
	draw = mlx_pixel_put(mlx_ptr, win_ptr, 313, 453, 18725551);
	draw = mlx_pixel_put(mlx_ptr, win_ptr, 314, 454, 18725551); 
	draw = mlx_pixel_put(mlx_ptr, win_ptr, 315, 455, 18725551);
	mlx_key_hook (win_ptr, deal_key, (void *)0);
	mlx_loop(mlx_ptr);
}
