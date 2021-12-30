# Taller/Deber creación de shell

## Instrucciones
En esta ocasión se implementara un "nuevo shell" básico de Linux usando las funciones fork() y execvp(). 
1. El programa debe tener el siguiente comportamiento:

	$ ./alexa
	>> 
2. El programa debe ofrecer el prompt ">>" y permitir la ejecución de cualquier programa o comando (excepto built-ins de bash) en la máquina, incluyendo argumentos, por ejemplo:

	$ ./alexa
	\>> ls -lh /usr 
	total 120K 
	drwxr-xr-x   2 root root  44K Aug  3 13:13 bin 
	drwxr-xr-x   2 root root 4.0K Apr 23 09:35 games 
	drwxr-xr-x  42 root root 4.0K Jul 15 14:32 include 
	drwxr-xr-x 110 root root 4.0K Jul 27 10:06 lib 
	drwxr-xr-x   2 root root 4.0K Apr 23 09:32 lib32 
	drwxr-xr-x   2 root root 4.0K Apr 23 09:32 lib64 
	drwxr-xr-x  11 root root  12K Jul 27 10:05 libexec 
	drwxr-xr-x   2 root root 4.0K Apr 23 09:32 libx32 
	drwxr-xr-x  10 root root 4.0K Apr 23 09:32 local
	drwxr-xr-x   2 root root  20K Aug  5 18:56 sbin 
	drwxr-xr-x 234 root root  12K Jul 15 14:31 share 
	drwxr-xr-x   6 root root 4.0K Aug  2 19:10 src
	\>>
	
	
3. Debe soportar tan solo un built-in command: QUIT, el cual termina el shell:

	$ ./alexa
	\>>QUIT
	BYE!
	$ 

4. Este "nuevo shell" debe crear un proceso hijo para ejecutar un programa usando fork() y execvp(). Se debe hacer "parsing" de los argumentos y enviarlos correctamente a execvp(). 
Esto se puede hacer con la función strtok(), a continuación un ejemplo de su uso:

	/**
	* Función ejemplo para separar una cadena de caracteres en
	* "tokens" delimitados por la cadena de caracteres delim.
 	*
 	* @param linea Cadena de caracteres a separar en tokens.
 	* @param delim Cadena de caracteres a usar como delimitador.
 	*/
	void separar_tokens(char *linea, char *delim)
	{
		char *token;
		int i = 0;

		printf("Separación en tokens:\n");

		/* obtiene el primer token */
		token = strtok(linea, delim);

		/* recorre todos los tokens */
		while( token != NULL ) {
			printf( "%d. %s\n", ++i, token);
			token = strtok(NULL, delim);
		}
	}

Nota: NO se debe implementar el uso de redirección: ¦ > <

Tareas con errores de compilación no serán calificadas.
	.El programa debe mostrar un mensaje de ayuda con la opción -h.
	.El repositorio debe contener el código fuente, README.md y el Makefile para la compilación.
	.El ejecutable debe llamarse alexa y make debe ser sensible a la ausencia del ejecutable.
	.make debe ser sensible a modificaciones en archivos de código fuente y recompilar únicamente el archivo modificado.
	.make no debe recompilar si ningún archivo ha sido modificado.
	.El Makefile debe tener un target clean para remover archivos temporales (ejecutable y object files).
	.El repositorio NO debe contener ningún archivo ejecutable u object file.
	.Debe existir un archivo .gitignore para evitar esto.
	.El README.md debe contener información sobre el trabajo y cómo compilarlo.
	.El entregable en esta tarea es el HASH del último commit o del commit que represente la última versión de la tarea. (Por ejemplo: fa1511e3fc032067561668d61b76f328ec0c974f). 

## Compilación
Para compilar:
```
$ make
```
## Test
Para probar el test de autocalificación:
```
$ make -f Testfile
```
Rubrica:

	. Funcionalidad /5
	. Makefile /2
	. Presentacion /3

