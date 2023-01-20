//
// Created by Samim sargin Ozcan on 1/20/23.
//

#include "mlx/mlx.h"

int main() {

	void *mlx;
	void *win;

	mlx = mlx_init();
	win = mlx_new_window(mlx, 1920, 1080, "AvukatBey");

	int width;
	int height;
	void *image = mlx_xpm_file_to_image(mlx, "./wall.xpm", &width, &height); // foto oluşturma

	mlx_put_image_to_window(mlx, win, image, 0, 0);
	mlx_put_image_to_window(mlx, win, image, 0, 64);
	mlx_put_image_to_window(mlx, win, image, 0, 128);
	mlx_put_image_to_window(mlx, win, image, 0, 192);

	mlx_loop(mlx);
}


char **map = {
	{1, 1,1 ,1, 1, 1,1,1,1,1,1},
	{1,1,1,1,1,1,1,0,0,0,0,0,0,0},
	{1, 1,1 ,1, 1, 1,1,1,1,1,1},

};