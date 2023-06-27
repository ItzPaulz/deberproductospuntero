#include <stdio.h>
#include <string.h>
#include "funciones.h"



int main() {
    char nombres[100][50];
    char descripciones[100][100];
    int cantidades[100];
    float precios[100];
    int numProductos = 0;
    int opcion;
    
    do {
        printf("Menu:\n");
        printf("1. Ver Videojuegos\n");
        printf("2. Ingresar Videojuegos\n");
        printf("3. Modificar Informacion del videojuego\n");
        printf("4. Eliminar Videojuego\n");
        printf("0. Salir\n");
        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);
        
        switch (opcion) {
            case 1:
                verProductos(nombres, descripciones, cantidades, precios, numProductos);
                break;
            case 2:
                ingresarProducto(nombres, descripciones, cantidades, precios, &numProductos);
                break;
            case 3:
                modificarProducto(nombres, descripciones, cantidades, precios, numProductos);
                break;
            case 4:
                eliminarProducto(nombres, descripciones, cantidades, precios, &numProductos);
                break;
            case 0:
                printf("Saliendo del programa.\n");
                break;
            default:
                printf("Opcion invalida.\n");
                break;
        }
    } while (opcion != 0);
    
    return 0;
}
