# clase-09-proyecto-mitad-semestre

## intsrucciones

* hacer login en GitHub.com
* entrar a este repositorio disponible en [https://github.com/aud5i022-2022-1/clase-09-proyecto-mitad-semestre](https://github.com/aud5i022-2022-1/clase-09-proyecto-mitad-semestre)
* hacer click en el botón "Fork" de este repositorio para copiarlo a tu cuenta personal.
* enviar el enlace de tu repositorio y la lista de integrantes a través de u-cursos al instructor.
* ahora puedes editar este archivo siguiendo este enlace [README.md](README.md) y haciendo click en el ícono de lápiz para editar.
* recomendación: grabar tus avances seguido, para que no pierdas tu avance, para esto, baja al final de la sección de edición, elige la opción " Commit directly to the main branch." luego haz click en el botón verde "Commit changes". repite esto cada vez que quieras grabar cambios.
* para subir imágenes, haz click en este enlace a la carpeta [imagenes/](imagenes/), luego haz click en el botón "Add files" y selecciona "Upload files". arrastra tus imágenes o añadelas con el enlace "choose your files". luego elige la opción "Commit directly to the main branch" y haz click en el botón verde "Commit changes"

## contenidos de este repositorio

* carpeta [codigo_arduino/](codigo_arduino/): carpeta que contiene el codigo de Arduino
  * archivo [odigo_arduino/codigo_arduino.ino](codigo_arduino/codigo_arduino.ino) : Codigo contiene comentarios en su interior
* carpeta [imagenes/](imagenes/): Imágenes del proyecto.
* archivo [README.md](README.md)
* archivo [README.pdf](README.pdf)

## ejemplos útiles

cada párrafo es una línea continua de texto. los puntos "." son para punto seguido.
esta línea está escrita en la siguiente línea en el archivo, pero se ve seguida a la anterior.

para hacer un nuevo párrafo, hay que dejar una línea en blanco entremedio.

* las
* listas
* son
* así
  * las sub-listas
  * son así
  * con dos espacios de indentación

los enlaces se hacen con corchetes y después paréntesis. el texto dentro de corchetes es lo que se ve en el enlace, y el texto dentro de paréntesis es dónde va ese enlace. les pido que sea el mismo texto. aquí ejemplos de enlaces a web y a otros archivos dentro de este repositorio.

* [https://www.wikipedia.org/](https://www.wikipedia.org/)
* [https://www.arduino.cc/](https://www.arduino.cc/)
* [imagenes/00-ejemplo.jpg](imagenes/00-ejemplo.jpg)
* [codigo_arduino/codigo_arduino.ino](codigo_arduino/codigo_arduino.ino)

para incluir imágenes que sean visibles en este documento, es igual que un enlace a una imagen, pero con un signo de exclamación antes de los corchetes "!", así:

![texto descripción de la foto](imagenes/00-ejemplo.jpg)

## borrador de muestra

a continuación les dejo un breve borrador con ejemplos, que si completan, tendrán todos los puntos de la pauta, suerte!

## acerca de

este proyecto de mitad de semestre fue hecho en el día martes 10 de mayo 2022, como parte del curso  aud5i022-2022-1.

los integrantes son: Tania Fuentes
                     Freddy Briones

## lista de materiales

los materiales son:

* Arduino Uno
* 2 Protoboard o 1 Protoboard larga
* Muchos cables
* Potenciómetro
* 8 Luces led
* 8 Botones
* Muchas Resistencias
* Parlante pequeño

## código para microcontrolador Arduino

Este código pertenece a nuestro proyecto de mitad de semestre, que consiste en un mini teclado, controlado por Arduino, compuesto de 8 notas (octava sin sostenidos o escala de Do), combinada con luces Led. La idea del proyecto es generar la combinación de notas con las luces, es decir, cuando se presionan los botones, se prende la luz correspondiente al color del botón de la nota presionada.
El código está basado en uno entregado por le Profesor Aaron Montoya en la clase n°7 y fue modificado según los requerimientos de nuestro proyecto. 
Ese cógido lo podemos encontrar en el repositorio aud5i022-2022-1 del profesor, buscando en las clases/clase-07/ej_02_sonido_pulsador.

En primer lugar, en setup() hacemos que los pines del 2 al 9 sean entradas digitales, el pin 10 sea salida digital, y abrimos la comunicación serial, con el fin de que al presionar un botón suene una nota, según la frecuencia correspondiente de cada una de ellas. 
Los pines 0 y 1 corresponden a Rx y Tx respectivamente, por lo que no pueden ser utilizados como entrada, ya que interrumpen la señal y son leídos de distinta manera. 

Luego en loop() leemos las entradas (pines2-9) y usamos la salida (pin10) para enviar la señal al parlante y que al presionar los botones suenen las notas a su frecuencia correspondiente.

## Armado de circuito

estos son los pasos para armar el circuito.

primero hacemos X y se ve así.

![texto descripción de la foto](imagenes/00-ejemplo.jpg)

después hacemos Y y se ve así.

![texto descripción de la foto](imagenes/IMG-20220510-WA0047[1].jpg)

## conclusiones

en este proyecto tuvimos los siguientes aprendizajes: 

* botón pulsador
* circuito para 

lo más difícil de este proyecto fue bla.

cometimos los siguientes errores durante el armado del circuito y en el código, y los solucionamos así y este error no lo supimos resolver.

este proyecto lo vemos como la base para lograr bla, nos hace pensar en bla, y nos gustaría expandirlo para 10 botones y mil luces y diez arduinos conectados por wifi.
