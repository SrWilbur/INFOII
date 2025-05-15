#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Este puntero contendrá la dirección de inicio del bloque creado
    int* ptr;
    int n, i;

    // Obtener el número de elementos para el vector
    printf("Ingrese el numero de elementos:");
    scanf("%d",&n);
    printf("Numero de elementos ingresado: %d\n", n);

    // Asignar memoria dinámicamente usando malloc()
    if (!(ptr = (int*)malloc(n * sizeof(int))))
    {
        printf("Memoria no asignada.\n");
        exit(1);
    }

    // La memoria ha sido asignada correctamente
    printf("Memoria asignada exitosamente usando malloc.\n");
    // cargamos el vector
    for (i = 0; i < n; ++i) {
        ptr[i] = i + 1;
    }

    // Imprimir los elementos del vector
    printf("Los elementos del vector son: ");
    for (i = 0; i < n; ++i) {
        printf("%d, ", ptr[i]);

    }
    free (ptr);
    printf ("\nmemoria asiganda con malloc ha sido liberada");

    return 0;
}
