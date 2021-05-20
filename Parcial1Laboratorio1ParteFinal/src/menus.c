#include <stdio.h>
#include "validaciones_UTN.h"


int menu(int* opcElegida, char mensaje[])
{
	int retorno = -1;

	if(opcElegida != NULL)
	{
		printf("\n1. Alta del Contribuyente\n");
		printf("2. Modificar datos del contribuyente\n");
		printf("3. Baja de contribuyente\n");
		printf("4. Recaudación\n");
		printf("5. Refinanciar Recaudación\n");
		printf("6. Saldar Recaudación\n");
		printf("7. Imprimir Contribuyentes\n");
		printf("8. Imprimir Recaudación\n");
		printf("9. Informes\n");
		printf("10. Salir\n");
		validacionNumeroEntero(opcElegida,mensaje);

		retorno = 0;
	}

	return retorno;
}


int menuModificar(int* opcElegida, char mensaje[])
{
	int retorno = -1;

	if(opcElegida != NULL)
	{
		printf("\n1. Cambiar el nombre\n");
		printf("2. Cambiar el Apellido\n");
		printf("3. Cambiar el C.U.I.L.\n");
		printf("4. Salir\n");
		validacionNumeroEntero(opcElegida,mensaje);

		retorno = 0;
	}

	return retorno;
}


int menuInformes(int* opcElegida, char mensaje[])
{
	int retorno = -1;

	if(opcElegida != NULL)
	{
		printf("\n1. Contribuyentes con más recaudaciones en estado refinanciar\n");
		printf("2. Cantidad de recaudaciones saldadas de importe mayor a 1000\n");
		printf("3. Datos Contribuyentes segun su tipo Recaudacion\n");
		printf("4. Nombre y c.u.i.l. de los Contribuyentes que pagaron impuestos en el mes de FEBRERO (mes 2) \n");
		printf("5. Salir\n");
		validacionNumeroEntero(opcElegida,mensaje);

		retorno = 0;
	}

	return retorno;
}


