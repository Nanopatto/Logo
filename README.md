## CREADOR

Mariano Antonio Pattoni Urbina 


## FUNCION DEL PROGRAMA

Realiza un rayito de tres secciones segun ciertas alturas y angulos dados


## EXPLICACION DEL PROGRAMA

Este programa, inicialmente genera una matriz cuadrada (en este caso un array de structs) segun el SIZE en "defines.h". En el archivo "coordinates.c" se reserva memoria para la matriz de coordenadas x-y.

Posteriormente, se pasa este array de coordenadas al archivo "thunder.c", que genera un array de enteros. Se escribe 0 si el punto pertence al rayito o 1 en caso contrario

Luego, se prosigue al archivo "color.c" que genera un arreglo de estructuras RGB. Cada variable es una entrada del array de colores y tienen un tamano maximo de 8bit (255 valores) por color (ver MAX en "defines.h").

Por ultimo, se tiene el archivo "image.c". Este abre un archivo ".ppm", es cual es un archivo grafico. La imagen se dibuja con el arreglo recibido de "color.c", empleando la funcion llamada "hue", la cual recibe un array con valores numericos y los convierte en valores de color para ser desplegados en un pixel. A traves de un ciclo, se va escribiendo una imagen de proporcion 1:1, con resolucion definida en "defines.h" como SIZE. Posteriormente, cuando se termina de renderizar la imagen, esta aparece como un archivo ".ppm" en la carpeta raiz del proyecto. En esta imagen se puede apreciar el rayito.

En el "main.c", se llaman las funciones anteriormente descritas.

Un EXTRA, un menu que indica que se pueden usar ciertas teclas para moverse en la imagen, como si de un videojuego se tratase. Para moverse arriba, abajo, izquierda y derecha, se uso la seleccion de teclas WSAD (respectivamente); y para acercar la imagen o alejarla, EQ respectivamente. Para que las selecciones surten efecto, se debe presionar ENTER luego de escribirlas en terminal. El programa se cierra con ESC (y luego en ENTER). La escala de acercamiento o alejamiento se puede ver como ZOOM en "defines.h".

## EJECUCION DEL PROGRAMA

Para correr este programa, se deben escribir en terminal los siguientes comandos:

Configuracion:
>>cmake --config .

(ver CMakeLists.txt para requisitos minimos de CMake)

Para compilar:
>>cmake --build .

Para ejecutar:
>>./bin/thunder

En caso de presentar algun problema, se recomienda eliminar el archivo "CMakeCache.txt", y reescribir los comandos anteriormente mencionados.

Una ultima aclaracion al momento de ejecutar, se debe ir a la carpeta de archivos de programa y abrir el archivo ".ppm" (que es la imagen) con el fin de lograr apreciar los movimientos que se pueden hacer en la imagen.

