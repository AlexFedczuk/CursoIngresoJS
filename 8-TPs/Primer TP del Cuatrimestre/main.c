#include <stdio.h>
#include <stdlib.h>

int main()
{
    float primerOperador;
    float segundoOperador;
    float resultadoSuma;
    float resultadoResta;
    float resultadoDivision;
    float resultadoMultiplicacion;
    char opcion;
    int contadorPrimerOperador;
    int contadorSegundoOperador;
    int banderaPrimerOperador;
    int banderaSegundoOperador;

    contadorPrimerOperador=0;
    contadorSegundoOperador=0;

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

            banderaPrimerOperador=primerOperador;

            if(primerOperador>0)
            {
               do
                {
                    banderaPrimerOperador=banderaPrimerOperador-1;

                    primerOperador=primerOperador*banderaPrimerOperador;

                    contadorPrimerOperador++;
                }
                while(contadorPrimerOperador!=primerOperador);
            }else
            {
                if(primerOperador<0)
                {
                   do
                    {
                        banderaPrimerOperador=banderaPrimerOperador+1;

                        primerOperador=primerOperador*(-(banderaPrimerOperador));

                        contadorPrimerOperador=-(contadorPrimerOperador)-1;
                    }
                    while(contadorPrimerOperador!=primerOperador);
                }else
                {
                    if(primerOperador==0)
                    {
                        primerOperador=1;
                    }
                }
            }

            banderaSegundoOperador=segundoOperador;

            if(segundoOperador>0)
            {
               do
                {
                    banderaSegundoOperador=banderaSegundoOperador-1;

                    segundoOperador=segundoOperador*banderaSegundoOperador;

                    contadorSegundoOperador++;
                }
                while(contadorSegundoOperador!=segundoOperador);
            }else
            {
                if(segundoOperador<0)
                {
                   do
                    {
                        banderaSegundoOperador=banderaSegundoOperador+1;

                        segundoOperador=segundoOperador*(-(banderaSegundoOperador));

                        contadorSegundoOperador=-(contadorSegundoOperador)-1;
                    }
                    while(contadorSegundoOperador!=segundoOperador);
                }else
                {
                    if(segundoOperador==0)
                    {
                        segundoOperador=1;
                    }
                }
            }

            printf("El factorial de x es: %.2f y El factorial de y es: %.2f\n",primerOperador,segundoOperador);
            break;

        default:
            break;

    }




    return 0;
}//Esta seria LA calculadora que debo terminar, me falta meter cada funcion opercion en una funcion y a una biblioteca...
