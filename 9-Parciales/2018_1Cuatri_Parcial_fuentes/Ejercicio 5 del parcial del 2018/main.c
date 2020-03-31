#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcion;

    printf("Elija y ingrese el numero del planeta que quiera:\n");
    printf("1-Mercurio\n");
    printf("2-Venus\n");
    printf("3-Tierra\n");
    printf("4-Marte\n");
    printf("5-Jupiter\n");
    printf("6-Saturno\n");
    printf("7-Urano\n");
    printf("8-Neptuno\n");
    scanf("%d",&opcion);

    switch(opcion)
        {
            case 3:
                printf("aca vivimos\n");
                break;

            case 1:
            case 2:
                printf("aca hace mas calor\n");
                break;

            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
                printf("Aqui hace mas frio\n");
                break;
            default:
                printf("El numero ingresado no es una opcion!\n");
                break;
        }
    return 0;
}
