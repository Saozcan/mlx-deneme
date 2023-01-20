cmake_minimum_required(VERSION 3.23)
project(mlxTest C)

set(CMAKE_C_STANDARD 11)

include_directories(mlx)

add_executable(mlxTest
        mlx/font.c
        mlx/mlx.h
        mlx/mlx_init_loop.m
        mlx/mlx_int.h
        mlx/mlx_int_str_to_wordtab.c
        mlx/mlx_mouse.m
        mlx/mlx_new_image.m
        mlx/mlx_new_window.h
        mlx/mlx_new_window.m
        mlx/mlx_opengl.h
        mlx/mlx_opengl.m
        mlx/mlx_png.c
        mlx/mlx_png.h
        mlx/mlx_rgb.c
        mlx/mlx_shaders.c
        mlx/mlx_xpm.c
        main.c)
