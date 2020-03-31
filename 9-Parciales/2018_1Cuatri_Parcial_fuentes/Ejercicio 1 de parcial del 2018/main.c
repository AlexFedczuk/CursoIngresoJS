#include <stdio.h>
#include <stdlib.h>

int main()
{
    float largoRectangulo;
    float anchoRectangulo;
    float perimetroRectangilo;

    printf("Ingrese el largo del rectangulo: ");
    scanf("%f",&largoRectangulo);

    printf("Ingrese el ancho del rectangulo: ");
    scanf("%f",&anchoRectangulo);

    perimetroRectangilo=2*(largoRectangulo+anchoRectangulo);

    printf("El perimetro del rectangulo es: %.2f\n",perimetroRectangilo);

    return 0;
}
