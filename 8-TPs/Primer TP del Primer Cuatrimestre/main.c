#include <stdio.h>
#include <stdlib.h>

int sumar(int x,int y);

int main()
{
    float primerOperador;
    float segundoOperador;
    float resultadoSuma;
    float resultadoResta;
    float resultadoDivision;
    float resultadoMultiplicacion;
    char opcion;
    int primerBandera;
    int segundaBandera;
    int resultadoFactorizadoX;
    int resultadoFactorizadoY;

    resultadoFactorizadoX=1;
    resultadoFactorizadoY=1;

    printf("Eliga una operacion para ejecutar\n");
    printf("a-Sumar\n");
    printf("b-Restar\n");
    printf("c-Dividir\n");
    printf("d-Multiplicar\n");
    printf("e-Factoriar\n");
    printf("Ingrese aqui: ");
    scanf("%c",&opcion);

    switch(opcion)
    {
        case 'a':
            printf("Ingrese el valor de x: ");
            scanf("%f",&primerOperador);

            printf("Ingrese el valor de y: ");
            scanf("%f",&segundoOperador);

            resultadoSuma=primerOperador+segundoOperador;

            printf("El resultado de x + y es: %.2f\n",resultadoSuma);
            break;

        case 'b':
            printf("Ingrese el primer operador: ");
            scanf("%f",&primerOperador);

            printf("Ingrese el segundo operador: ");
            scanf("%f",&segundoOperador);

            resultadoResta=primerOperador-segundoOperador;

            printf("El resultado de x - y es: %.2f\n",resultadoResta);
            break;

        case 'c':
            printf("Ingrese el primer operador: ");
            scanf("%f",&primerOperador);

            printf("Ingrese el segundo operador: ");
            scanf("%f",&segundoOperador);

            resultadoDivision=primerOperador/segundoOperador;

            if(segundoOperador!=0)
            {
                printf("El resultado de x / y es: %.2f\n",resultadoDivision);
            }else
            {
                printf("No es posible dividir por cero");
            }
            break;

        case 'd':
            printf("Ingrese el primer operador: ");
            scanf("%f",&primerOperador);

            printf("Ingrese el segundo operador: ");
            scanf("%f",&segundoOperador);

            resultadoMultiplicacion=primerOperador*segundoOperador;

            printf("El resultado de x * y es: %.2f\n",resultadoMultiplicacion);
            break;

        case 'e':

            printf("Ingrese el primer operador: ");
            scanf("%f",&primerOperador);

            printf("Ingrese el segundo operador: ");
            scanf("%f",&segundoOperador);

            for(primerBandera=1;primerBandera<=primerOperador;primerBandera++)
                resultadoFactorizadoX=resultadoFactorizadoX*primerBandera;

            for(segundaBandera=1;segundaBandera<=segundoOperador;segundaBandera++)
                resultadoFactorizadoY=resultadoFactorizadoY*segundaBandera;

            printf("El factorial de x es: %d y el factorial de y es: %d",resultadoFactorizadoX,resultadoFactorizadoY);
            break;

        default:
            break;

    }




    return 0;
}

int sumar(int x,int y)
{

}
