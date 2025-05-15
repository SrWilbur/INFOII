# Material de Clases – Informática II (UTN-FRH)

Este repositorio contiene ejemplos, ejercicios y material complementario utilizados en las clases de la materia **Informática II**, correspondiente a la carrera de Ingeniería Electrónica en la **UTN – Facultad Regional Haedo**.

> **DISCLAIMER**: Este repositorio no está completamente autocontenido. Está pensado como soporte para las clases dictadas en el aula. Algunos archivos pueden requerir explicación oral o estar incompletos sin el contexto brindado durante la cursada.

---

## 📁 Estructura del repositorio
```
/
├── C/
│ ├── Clase_01/
│ ├── Clase_02/
│ └── ...
├── C++/
│ ├── Clase_01/
│ ├── Clase_02/
│ └── ...
└── README.md
```

## 🗂️ Contenidos por clase

### [🔹 Clase 01 – Argumentos del main - Streams ](https://github.com/SrWilbur/INFOII/tree/main/C/clase_01)

- función `main`
- `argc` y `argv`
- Equivalencia de `char *argv[]` y `char **argv`
- Validación de argumentos y buenas prácticas
- `atoi`, `atof`, `strtol`, `strtof`
- Variables de entorno y su uso en C
- Uso del tercer parámetro `envp`
- ¿Qué es un stream en C?
- Streams estándar
- `stdin` y `fflush`
- `stdout` y `stderr`
- Redirigir `stdout` desde consola
- Ejercicios propuestos

### [🔹 Clase 02 – Archivos de texto - Acceso secuencial](https://github.com/SrWilbur/INFOII/tree/main/C/clase_02)

- Introducción al manejo de archivos en C (*File Handling*)
- `fopen()` y modos de acceso
- Importancia de `fclose()`
- Escritura secuencial en archivos de texto:
  - `fprintf()`
  - `fputs()`
  - `fputc()` *(¿quizás quisiste poner `fputc()` en lugar de `fgetc()` aquí?)*
- *Buffering* – almacenamiento temporal
- `EOF` – fin de archivo (*End Of File*)
- Lectura secuencial en archivos de texto:
  - `fscanf()`
  - `fgets()`
  - `fgetc()`
- `feof()` – verificación de fin de archivo
- Problemas propuestos

### [🔹 Clase 03 – Archivos binarios](https://github.com/SrWilbur/INFOII/tree/main/C/clase_03)

- Archivos de texto vs binarios
- Modelo de la ventana
- `fread()` y `fwrite()`
- `little endian` y `big endian`
- Diferencias clave entre archivos binarios y de texto
- Tipos de tamaño fijo (`<stdint.h>`)
- `fseek()`
- Introducción a la depuración de código
- `ftell()`
- `ferror()`
- `rewind()`, `remove()`, `rename()`

### [🔹 Clase 04 – Manejo avanzado de archivos I](https://github.com/SrWilbur/INFOII/tree/main/C/clase_04)

- Un poco de historia
- Discos modernos
- RAM vs SSD – Latencia y velocidad de transferencia
- Trabajar en memoria vs trabajar en disco

   #### Ordenamiento
- Ordenamiento interno con vector auxiliar (en memoria)
- Uso de `const` en punteros
- Ordenamiento externo con burbujeo (en archivo)

   #### Búsqueda
- Búsqueda en un archivo de texto – Métodos
- Búsqueda en un archivo de texto – carácter por carácter
- Búsqueda en un archivo binario – referencia a través de un puntero

   #### Copia
- Copia básica de un archivo binario
- Modificación durante la copia


### [🔹 Clase 05 – Manejo avanzado de archivos II](https://github.com/SrWilbur/INFOII/tree/main/C/clase_05)

> La diapositiva no es exactamente la que vimos en clase debido a que no se guardaron los últimos cambios realizados durante la clase del **26 de abril**. No cuento con el tiempo necesario para rehacerla completamente, por eso les aclaro lo siguiente:

#### Temas incluidos:
- Modificación de archivos en C
- Escritura directa en archivos (binario y lectura/escritura)
- Uso de archivos temporales para modificaciones
- Buenas prácticas generales

#### Lo que se vio en clase pero no quedó en la diapositiva:
- El problema típico que ocurre al usar `fread()` seguido de `fwrite()` sin realizar antes un `fseek()` en archivos abiertos con `"r+b"`.
- Por qué es necesario hacer un `fseek()` "falso" entre la lectura y la escritura.
- Qué alternativas existen.
- Recomendaciones y buenas prácticas para evitar corrupción de datos o errores de lógica al modificar archivos binarios.

### [🔹 Clase 06 – Gestión dinámica de memoria](https://github.com/SrWilbur/INFOII/tree/main/C/clase_03)

   #### Duración, alcance y vinculación
  - Concepto general de duración, alcance y vinculación de variables
  - Variables locales: duración, alcance y vinculación
  - Variables globales: duración, alcance y vinculación
  - Usos del modificador `static`

   #### Segmentos de memoria de un programa
  - Stack
  - Heap

   #### Memoria dinámica en C
  - Uso de `malloc()`
  - Uso de `calloc()`
  - Uso de `free()`
  - Uso de `realloc()`
  - Buenas prácticas

- Ejercicios propuestos


## 💬 Consultas

Este repositorio está pensado como complemento a las clases. Si tenés dudas, consultalas en el aula o a través del canal que se indique en clase.

