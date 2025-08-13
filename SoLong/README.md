Paso a paso de la creación del proyecto

1) Compilar la librería MLX42 (Codam);
	1.1) cmake -B build;
	1.2) cmake --build build -j4;

2) Hacer Makefile;
3) En el main.c -> Evalluar los argumentos;
4) Crear función para evalluar que el archivo que se envía como argumento es ".ber";
5) Crear función para que cuente las lineas del mapa;
6) Crear función que genere un array del mapa;
7) Validar mapa;
	7.1) Evaluar que las columnas sean iguales;