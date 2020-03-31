#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcion;

    printf("Elija una hora dentro de un dia(00:00hs hasta 24:00)");
    scanf("%d",&opcion);

    switch(opcion)
    {
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
            printf("es de mañana");
            break;
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
            printf("es de tarde");
            break;
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 20:
        case 21:
        case 22:
        case 23:
        case 24:
            printf("Es de noche, a dormir!");
            break;
        default:
            printf("Esa hora es invalida");
            break;
    }
    return 0;
}
