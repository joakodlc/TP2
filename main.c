#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include "funciones.h"
#include <conio.h>
#include <ctype.h>

#define MAX 20
#define VACIO 0
#define ACTIVO 1
#define BORRADO 2

#define RED "\x1b[31m"
#define YELLOW "\x1b[33m"
#define GREEN "\x1b[32m"
#define BLUE "\x1b[34m"
#define CYAN "\x1b[36m"
#define MAGENTA "\x1b[35m"
#define RESET "\x1b[0m"

int main()
{
    EPersona lista[20];
    EPersona listaaux[20];
    init(lista);

    char seguir = 's';
    int opcion = 0;

    while (seguir == 's')
    {
        printf(CYAN "------------------------------------------------ \n" RESET);
        printf(CYAN "|---> BIENVENIDO A TU AGENDA CODIFICADA <---| \n" RESET);
        printf(CYAN "------------------------------------------------ \n \n" RESET);

        printf(RED "1- Agregar persona\n" RESET);
        printf(YELLOW "2- Borrar persona\n" RESET);
        printf(GREEN "3- Imprimir lista ordenada por nombre\n" RESET);
        printf(BLUE "4- Imprimir grafico de edades\n" RESET);
        printf(MAGENTA "5- Salir\n\n" RESET);

        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            alta(lista);
            break;
        case 2:
            baja(lista);
            break;
        case 3:
            mostrarOrdenado(lista);
            break;
        case 4:
            imprimirgrafico(lista);
            break;
        case 5:
            seguir = 'n';
            break;
        }
    }
    return 0;
}