Paso a paso de la creación del proyecto

1) Compilar la librería MLX42 (Codam);
	1.1) cmake -B build;
	1.2) cmake --build build -j4;

2) Hacer el Makefile;
3) En el main.c -> Evaluar los argumentos;
4) Crear mi .h;
	4.1) Crear estructura;

5) Crear función para evaluar que el archivo que se envía como argumento es ".ber";
	int	check_ber(char *filename)

6) Crear función para que cuente las filas del mapa;
	int	count_rows(char *filename)

7) Crear función que genere un array del mapa;
	int	create_map(t_game *game, char *filename)

8) Validar mapa;
	8.1) Evaluar que las columnas (caracteres) sean iguales;
		int	ft_validation_columns_chars(t_game *game)

	8.2) Evaluar que esté rodeado de muros (1);
		int	ft_validation_walls(t_game *game)

	8.3) Evaluar que no hay más de un personaje y una salida;
		int	ft_validation_duplicates(t_game *game)

	8.4) Función que me valida 8.1, 8.2, 8.3 y 8.8 en una sola función
		int	ft_validate_map(t_game *game)

	8.5) Duplicar el mapa para poder hacer flood fill;
		char	**ft_copy_map(t_game *game)

	8.6) Encontrar la posición del jugador;
		void	ft_find_player(t_game *game)

	8.6) Comprobar que hay un camino válido en el mapa (flood fill);
		void	ft_flood_fill(char **map_copy, t_game *game, int x, int y)

	8.7) Verificar que el mapa es jugable (que el flood fill haya sido correcto);
		int	ft_map_playable(char **map_copy)

	8.8) Función que me agrupe 8.5, 8.6 y 8.7 en una sola función.
		int	ft_validate_map_playable(t_game *game)

9) Inicializar la ventana (vacía);
	void	init_window(t_game *game)

10) Cargar los png;
	void	ft_load_all_png(t_game	*game)

11) Convertirlos a imagen (MLX42);
	mlx_image_t	*ft_load_png(t_game *game, char *file)

12) "Pintar" todo lo estático;
	void	ft_draw_map(t_game *game, int x, int y)

13) "Pintar" al jugador (dinámico);
	void	ft_draw_player(t_game *game)

14) Crear/activar los hooks;
	void	ft_key_hooks(mlx_key_data_t keydata, void *param)

15) Crear una función para los movimientos del jugador;
	void	ft_move_player(t_game *game, int new_y, int new_x)

16) Función para deshabilitar los coleccionables;
	void	ft_disable_collect_at(t_game *game, int x, int y)

17) Crear función para cerrar la ventana;
	void	ft_close_window(void *param)

18) Crear función para cerrar y liberar todo;
	void	ft_clean_exit(t_game *game, int code)