#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra;
    int numero;
    char respuesta[3];
    int contadorNumerosPares;
    int contadorNumerosImpares;
    int contadorCeros;
    int contadorNumerosPositivos;
    int acumuladorNumerosPositivos;
    float promedioNumerosPositivos;
    int acumuladorNumerosNegativos;
    int contador;
    int numeroMaximo;
    char letraNumeroMaximo;
    int numeroMinimo;
    char letraNumeroMinimo;


    contadorNumerosPares=0;
    contadorNumerosImpares=0;
    contadorCeros=0;
    contadorNumerosPositivos=0;
    acumuladorNumerosPositivos=0;
    contador=0;

    do
    {
        printf("Ingrese una letra: ");
        scanf("%c",&letra);

        do
        {
            printf("Ingrese un numero(entre -100 y 100): ");
            scanf("%d",&numero);
        }
        while(numero<-100 || numero>100);

        if(numero%2)
        {
            contadorNumerosPares++;
        }

        if(numero%3)
        {
            contadorNumerosImpares++;
        }

        if(numero==0)
        {
            contadorCeros++;
        }

        if(numero>0)
        {
            contadorNumerosPositivos++;
            acumuladorNumerosPositivos=+numero;
        }

        if(numero<0)
        {
            acumuladorNumerosNegativos=+numero;
        }

        if(contador==0 || numeroMaximo<numero)
        {
            numeroMaximo=numero;
            letraNumeroMaximo=letra;
        }

        if(contador==0 || numeroMinimo<numero)
        {
            numeroMinimo=numero;
            letraNumeroMinimo=letra;
        }

        contador++;
    }
    while(respuesta=='si');

    if(contadorNumerosPositivos>0)
    {
        promedioNumerosPositivos=acumuladorNumerosPositivos/contadorNumerosPositivos;
    }

    printf("La cantidad de numeros pares es: %d\n",contadorNumerosPares);
    printf("La cantidad de numeros impares es: %d\n",contadorNumerosImpares);
    printf("La cantidad de ceros(0) es: %d\n",contadorCeros);
    printf("El promedio de todos los números positivos ingresados es: %.2f\n",promedioNumerosPositivos);
    printf("La suma de todos los números negativos es: %d\n",acumuladorNumerosNegativos);
    printf("El numero maximo es %d y su letra es %c\n",numeroMaximo,letraNumeroMaximo);
    printf("El numero minimo es %d y su letra es %c\n",numeroMinimo,letraNumeroMinimo);

    return 0;
}
