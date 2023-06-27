#include <stdio.h>
#include <string.h>
#include "funciones.h"



void verProductos(char nombres[][50], char descripciones[][100], int cantidades[], float precios[], int numProductos) {
    printf("Videojuegos:\n");
    for (int i = 0; i < numProductos; i++) {
        printf("Videojuego %d:\n", i + 1);
        printf("Nombre: %s\n", nombres[i]);
        printf("Descripción: %s\n", descripciones[i]);
        printf("Cantidad: %d\n", cantidades[i]);
        printf("Precio: %.2f\n", precios[i]);
        printf("\n");
    }
}

void ingresarProducto(char nombres[][50], char descripciones[][100], int cantidades[], float precios[], int *numProductos) {
    if (*numProductos >= 100) {
        printf("No se pueden agregar mas videojuegos. Limite alcanzado.\n\n");
        return;
    }
    
    printf("Ingrese el nombre del videojuego: ");
    scanf("%s", nombres[*numProductos]);
    
    printf("Ingrese la descripcion del videojuego: ");
    scanf("%s", descripciones[*numProductos]);
    
    printf("Ingrese la cantidad del videojuego: ");
    scanf("%d", &cantidades[*numProductos]);
    
    printf("Ingrese el precio del videojuego: ");
    scanf("%f", &precios[*numProductos]);
    
    (*numProductos)++;
    
    printf("Videojuego ingresado correctamente.\n\n");
}

void modificarProducto(char nombres[][50], char descripciones[][100], int cantidades[], float precios[], int numProductos) {
    int indice;
    
    printf("Ingrese el indice del videojuego a modificar (1-%d): ", numProductos);
    scanf("%d", &indice);
    indice--;  
    
    if (indice >= 0 && indice < numProductos) {
        printf("Ingrese el nuevo nombre del videojuego: ");
        scanf("%s", nombres[indice]);
        
        printf("Ingrese la nueva descripcion del videojuego: ");
        scanf("%s", descripciones[indice]);
        
        printf("Ingrese la nueva cantidad del videojuego: ");
        scanf("%d", &cantidades[indice]);
        
        printf("Ingrese el nuevo precio del videojuego: ");
        scanf("%f", &precios[indice]);
        
        printf("Videojuego modificado correctamente.\n\n");
    } else {
        printf("Indice No existe.\n\n");
    }
}

void eliminarProducto(char nombres[][50], char descripciones[][100], int cantidades[], float precios[], int *numProductos) {
    int indice;
    
    printf("Ingrese el indice del videojuego a eliminar (1-%d): ", *numProductos);
    scanf("%d", &indice);
    indice--;  
    
    if (indice >= 0 && indice < *numProductos) {
        
        for (int i = indice; i < *numProductos - 1; i++) {
            strcpy(nombres[i], nombres[i + 1]);
            strcpy(descripciones[i], descripciones[i + 1]);
            cantidades[i] = cantidades[i + 1];
            precios[i] = precios[i + 1];
        }
        
        (*numProductos)--;
        
        printf("Videojuego eliminado correctamente.\n\n");
    } else {
        printf("Indice no encontrado.\n\n");
    }
}
