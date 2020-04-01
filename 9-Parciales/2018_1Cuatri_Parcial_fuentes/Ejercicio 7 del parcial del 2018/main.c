#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nota;
    char sexo;
    char respuesta [3];
    int contador;
    int acumulador;
    float promedio;
    int notaMenor;
    char sexoNotaMenor;
    int contadorVaronesAltaNota;

    do
    {
        do
        {
           printf("Ingrese la nota del alumno(entre 0 y 10): \n");
           scanf("%d",&nota);
        }
        while(nota<0 || nota>10);

        do
        {
            printf("Ingrese el sexo del alumno(f o m): \n");
            scanf("%c",&sexo);
        }
        while(sexo!='f' || sexo!='m');

        if(contador==0 || notaMenor>nota)
        {
            notaMenor=nota;
            sexoNotaMenor=sexo;
        }

        if(sexo=='m' && nota>5)
        {
            contadorVaronesAltaNota++;
        }

        contador++;
        acumulador=+nota;
    }
    while(contador<5);

    promedio=acumulador/contador;

    printf("El promedio de las notas totales es: %.2f\n", promedio);
    printf("La nota mas baja es %d y el sexo del alumno es %c\n",notaMenor,sexoNotaMenor);
    printf("La cantidad de varones con nota mayor igual a 6 es: &d", contadorVaronesAltaNota);

    while(respuesta=='si');
    return 0;
}
