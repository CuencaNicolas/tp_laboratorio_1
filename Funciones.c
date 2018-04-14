#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

float operandoA()
{
    float numeroA;
    printf("Ingrese el primer numero: ");
    scanf("%f",&numeroA);

    return numeroA;
}
float operandoB()
{
    float numeroB;
    printf("Ingrese el segundo numero: ");
    scanf("%f",&numeroB);

    return numeroB;
}
void suma(float numeroA,float numeroB)
{
    float suma;
    suma=numeroA+numeroB;

    printf("El resultado sumado es: %f\n",suma);
}
void resta(float numeroA,float numeroB)
{
    float resta;
    resta=numeroA-numeroB;

    printf("El resultado restado es: %f\n",resta);
}
void multiplicacion(float numeroA,float numeroB)
{
    float multiplicacion;
    multiplicacion=numeroA*numeroB;

    printf("El resultado multiplicado es: %f\n",multiplicacion);
}
void division(float numeroA,float numeroB)
{

    if(numeroB==0)
    {
        printf("Error!!!,no podes dividir el numero A por cero,intente nuevamente\n");
    }
    else
    {
        float division=numeroA/numeroB;

        printf("El resultado dividido es: %f\n",division);
    }

}
void factorial(int numeroA)
{
    int factorial=1;
    int i;

    if(numeroA<0)
    {
        printf("no se puede ingresar numeros negativos,intente nuevamente\n");
    }
    else
    {
        for(i=1;i<=numeroA;i++)
        {
            factorial=factorial*i;
        }

        printf("El resultado factoreado es: %d\n",factorial);
    }
}
void todasOperaciones(float numeroA,float numeroB)
{
    suma(numeroA,numeroB);
    resta(numeroA,numeroB);
    multiplicacion(numeroA,numeroB);
    division(numeroA,numeroB);
    factorial(numeroA);
}

