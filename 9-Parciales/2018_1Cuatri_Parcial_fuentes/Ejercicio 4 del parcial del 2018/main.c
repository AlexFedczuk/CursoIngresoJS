#include <stdio.h>
#include <stdlib.h>

int main()
{
    float primerNumero;
    float segundoNumero;
    float resultado;

    printf("Ingrese el primer numero: ");
    scanf("%f",&primerNumero);

    printf("Ingrese el segundo numero: ");
    scanf("%f",&segundoNumero);

    if(primerNumero==segundoNumero)
    {
        printf("%.2f%.2f\n",primerNumero, segundoNumero);
    }else
    {
        if(primerNumero>segundoNumero)
        {
            resultado=primerNumero-segundoNumero;
            printf("La resta dio: %.2f\n",resultado);
        }else
        {
            if(primerNumero<segundoNumero)
            {
                resultado=primerNumero+segundoNumero;
                printf("La suma dio: %.2f\n",resultado);
            }
        }
    }

    if(resultado>10)
    {
        printf("la suma es %.2f y supero el 10\n", resultado);
    }
    return 0;
}
