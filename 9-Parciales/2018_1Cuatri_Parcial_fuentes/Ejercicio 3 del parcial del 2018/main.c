#include <stdio.h>
#include <stdlib.h>

int main()
{
    float precioProducto;
    float descuento;
    float precioFinal;

    printf("Ingrese el precio del producto: ");
    scanf("%f",&precioProducto);

    printf("Ingrese el porcentaje de descuento: ");
    scanf("%f",&descuento);

    precioFinal=precioProducto-precioProducto*descuento/100;

    printf("El precio final es de $ %.2f\n",precioFinal);
    return 0;
}
