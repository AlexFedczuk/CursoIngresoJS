#include <stdio.h>
#include <stdlib.h>

int main()
{
    char primerNombreUsuario [31];
    char localidadUsuario[31];

    printf("Ingrese su primer nombre: ");
    scanf("%s",&primerNombreUsuario);

    printf("Ingrese el nombre de su localidad(sin espacios): ");
    scanf("%s",&localidadUsuario);

    printf("Su nombre es %s y su localidad es %s\n",primerNombreUsuario,localidadUsuario);
    return 0;
}
