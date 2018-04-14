#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

int main()
{
    /*Ponemos las variables de los dos numeros y la de la opcion*/
    float numeroA;
    float numeroB;
    int opcion;

    int banderaA=0;
    int banderaB=0;


    /*Empezamos con un bucle do while para que el programa se ejecute hasta que el usuario seleccione la opcion 5*/

    do
    {
        system("cls");/*Esta funcion limpiara la pantalla en cada nueva operacion*/

        /*Se mostrara el titulo del programa en el cmd*/
        printf("                                      \n");
        printf("**************************************\n");
        printf("*>>>>>>>>>MENU CALCULADORA<<<<<<<<<<<*\n");
        printf("**************************************\n");
        printf("                                      \n");

        if(banderaA==0)
        {
            printf("  1-Primer numero: \n");
        }
        else
        {
            printf("  1-Ingrese primer numero: %.2f\n",numeroA);
        }

        if(banderaB==0)
        {
            printf("  2-Segundo numero: \n");
        }
        else
        {
            printf("  2-Ingrese segundo numero: %.2f\n",numeroB);
        }
        printf("                                      \n");
        printf("**************************************\n");
        printf("* 1-Ingresar 1er operando (A=x)      *\n");
        printf("* 2-Ingresar 2do operando (B=y)      *\n");
        printf("* 3-Calcular la suma (A+B)           *\n");
        printf("* 4-Calcular la resta (A-B)          *\n");
        printf("* 5-Calcular la division (A/B)       *\n");
        printf("* 6-Calcular la multiplicacion (A*B) *\n");
        printf("* 7-Calcular la factorial (A!)       *\n");
        printf("* 8-Calcular todas las operaciones   *\n");
        printf("* 9-Salir                            *\n");
        printf("**************************************\n");


        printf("Ingrese una opcion: ");
        scanf("%d",&opcion);

        /*Usamos un switch para el menu de opciones donde se ejecutara la operacion correspondiente a eleccion del usuario*/
        switch(opcion)
        {
            case 1:
            numeroA=operandoA();
            banderaA=1;
            break;

            case 2:
            numeroB=operandoB();
            banderaB=1;
            break;

            case 3:
            if(banderaA == 0 || banderaB == 0)
            {
                printf("Error!!!,Ingrese valor distinto a cero: \n");
            }
            else
            {
                suma(numeroA,numeroB);
            }
            break;

            case 4:
            if(banderaA== 0 || banderaB == 0)
            {
                printf("Error!!!,Ingrese valor distinto a cero: \n");
            }
            else
            {
                resta(numeroA,numeroB);
            }
            break;

            case 5:
            if(banderaA == 0 || banderaB == 0)
            {
                printf("Error!!!,Ingrese valor distinto a cero: \n");
            }
            else
            {
                division(numeroA,numeroB);
            }
            break;

            case 6:
            if(banderaA == 0 || banderaB == 0)
            {
                printf("Error!!!,Ingrese valor distinto a cero: \n");
            }
            else
            {
                multiplicacion(numeroA,numeroB);
            }
            break;

            case 7:
            if(banderaA == 0)
            {
                printf("Error!!!,Ingrese valor distinto a cero: \n");
            }
            else
            {
                factorial(numeroA);
            }
            break;

            case 8:
            if(banderaA == 0 || banderaB == 0)
            {
                printf("Error!!!,Ingrese valor distinto a cero: \n");
            }
            else
            {
                todasOperaciones(numeroA,numeroB);
            }
            break;

            case 9:
            printf("El programa se cerrara... \n");
            return;

            default:
            printf("Ha ingresado una opcion incorrecta,intentelo de nuevo: \n");
            break;
        }


        system("pause");


        }
    /*Cuando el usuario selecciona la opcion 9, el bucle se termina, cerrando asi el programa */
    while(!(opcion == 9));

    }

