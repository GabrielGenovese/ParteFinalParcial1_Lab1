#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Contribuyente.h"
#include "Recaudacion.h"


int imprimirContribuyentes(eContribuyente contribuyentes[],int tamanioContribuyentes, eRecaudacion recaudaciones[],int tamanioRecaudaciones)
{
	int retorno = -1;
	if(contribuyentes != NULL && tamanioContribuyentes > 0 && recaudaciones != NULL && tamanioRecaudaciones > 0)
	{
		for(int i = 0; i < tamanioContribuyentes; i++ )
		{
			if(!contribuyentes[i].isEmpty)
			{
				tituloContribuyente();
				imprimeUnContribuyente(contribuyentes,i);
				printf("\nRecaudaciones de %s %s: \n",contribuyentes[i].apellido, contribuyentes[i].nombre);
				tituloRecaudaciones();

				for(int j = 0; j < tamanioRecaudaciones; j++)
				{
					if(contribuyentes[i].idContribuyente == recaudaciones[j].idContribuyente && !recaudaciones[j].isEmpty)
					{
						imprimeUnaRecaudacion(recaudaciones,j);
					}
				}
			}
		}
		retorno = 0;
	}

	return retorno;
}


void tituloRecaudacionesConNombreCuil()
{
	printf("\n%20s|","ID Contribuyente");
	printf("%20s|","ID Recaudacion");
	printf("%15s|","Tipo");
	printf("%10s|","Mes");
	printf("%10s|","Importe");
	printf("%15s|","C.U.I.L");
	printf("%20s|\n","Nombre");
}


int imprimeUnaRecaudacionConNombreCuil(eRecaudacion recaudaciones[], int posicion, char nombre[], char cuil[])
{
	int retorno = -1;

	if(recaudaciones != NULL && posicion > -1)
	{
		printf("\n%20d|",recaudaciones[posicion].idContribuyente);
		printf("%20d|",recaudaciones[posicion].idRecaudacion);
		printf("%10d|",recaudaciones[posicion].mes);
		imprimeTipo(recaudaciones[posicion].tipo);
		printf("%10.1f|",recaudaciones[posicion].importe);
		printf("%15s|",cuil);
		printf("%20s|\n",nombre);

		retorno = 0;
	}

	return retorno;
}


int imprimirRecaudacionesSaldadas( eRecaudacion recaudaciones[],int tamanioRecaudaciones, eContribuyente contribuyentes[],int tamanioContribuyentes)
{
	int retorno = -1;

	if(contribuyentes != NULL && tamanioContribuyentes > 0 && recaudaciones != NULL && tamanioRecaudaciones > 0)
	{
		tituloRecaudacionesConNombreCuil();
		for(int i = 0; i < tamanioRecaudaciones; i++)
		{
			if(!recaudaciones[i].isEmpty && !strcmp(recaudaciones[i].estado,"saldada"))
			{
				for(int j = 0; j < tamanioContribuyentes; j++)
				{
					if(recaudaciones[i].idContribuyente == contribuyentes[j].idContribuyente && !contribuyentes[j].isEmpty)
					{
						imprimeUnaRecaudacionConNombreCuil(recaudaciones,i,contribuyentes[j].nombre, contribuyentes[j].cuil);
					}
				}
			}
		}
		retorno = 0;
	}

	return retorno;
}
