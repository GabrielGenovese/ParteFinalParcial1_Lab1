/*
Nombre: Genovese Gabriel Alejandro
Division: 1°E
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Contribuyente.h"
#include "Recaudacion.h"
#include "menus.h"
#include "validaciones_UTN.h"
#include "informes.h"

#define MAXIMO_RECAUDACIONES 50
#define MAXIMO_CONTRIBUYENTES 50

int main(void) {
	setbuf(stdout,NULL);

	eContribuyente	contribuyentes[MAXIMO_CONTRIBUYENTES];
	eRecaudacion recaudaciones[MAXIMO_RECAUDACIONES];
	int opcionPrincipal;
	int opcionSecundaria;
	int indiceLibre;
	int idContribuyente = 1000;
	int idRecaudacion = 100;
	int posicionID;
	char respuesta;

	inicializacionContribuyente(contribuyentes,MAXIMO_CONTRIBUYENTES);
	inicializacionRecaudacion(recaudaciones,MAXIMO_RECAUDACIONES);

	do
	{
		menu(&opcionPrincipal,"Opcion: ");
		switch(opcionPrincipal)
		{
		case 1:
			if(!buscarLibreContribuyente(contribuyentes,MAXIMO_CONTRIBUYENTES,&indiceLibre))
			{
				ingresoDatosContribuyente(contribuyentes,indiceLibre,&idContribuyente);
			}
			else
			{
				printf("No hay espacio libre para mas contribuyentes");
			}
			break;
		case 2:
			if(!buscarIdContribuyente(contribuyentes,MAXIMO_CONTRIBUYENTES,&posicionID,"Ingrese el ID del contribuyente a Modificar: "))
			{
				do{
					menuModificar(&opcionSecundaria,"opcion: ");
					switch(opcionSecundaria)
					{
					case 1:
						validacionStringAlpha21C(contribuyentes[posicionID].nombre,"Ingrese el nuevo nombre del contribuyente: ");
						break;
					case 2:
						validacionStringAlpha21C(contribuyentes[posicionID].apellido,"Ingrese el nuevo apellido del contribuyente: ");
						break;
					case 3:
						validacionCUIL(contribuyentes[posicionID].cuil,"Ingrese nuevo el C.U.I.L. del contribuyente: ");
						break;
					case 4:
						break;
					default:
						printf("Opcion Invalida");
						break;
					}

				}while(opcionSecundaria != 4);

			}
			break;

		case 3:
			if(!buscarIdContribuyente(contribuyentes,MAXIMO_CONTRIBUYENTES,&posicionID,"Ingrese el ID del contribuyente a Eliminar: "))
			{
				imprimeRecaudacionesPorIDContribuyente(recaudaciones,MAXIMO_RECAUDACIONES,contribuyentes[posicionID].idContribuyente);
				validacionCaracterFijos(&respuesta,"¿Quiere confirmar la eliminacion? (s/n) ",'s','n');
				if(respuesta == 's')
				{
					bajaLogicaContribuyente(contribuyentes,posicionID);
					bajaLogicaRecaudacionesPorIDContribuyente(recaudaciones,MAXIMO_RECAUDACIONES,contribuyentes[posicionID].idContribuyente);
				}
			}
			else
			{
				printf("ID Invalida");
			}
			break;
		case 4:
			if(!buscarLibreRecaudacion(recaudaciones,MAXIMO_RECAUDACIONES,&indiceLibre))
			{
				while(buscarIdContribuyente(contribuyentes,MAXIMO_CONTRIBUYENTES,&posicionID,"Ingrese el ID del contribuyente de esta Recaudacion: "))
				{
					printf("ID Invalida\n");
				}
				ingresoDatosRecaudacion(recaudaciones,indiceLibre,&idRecaudacion,contribuyentes[posicionID].idContribuyente);
			}
			break;
		case 5:
			if(!buscarIdRecaudacion(recaudaciones,MAXIMO_RECAUDACIONES,&posicionID,"Ingrese el ID de la Recaudacion: "))
			{
				imprimeContribuyentePorID(contribuyentes,MAXIMO_CONTRIBUYENTES,recaudaciones[posicionID].idContribuyente);
				validacionCaracterFijos(&respuesta,"¿Desea cambiar el estado de esta recaudacion a refinanciar: ? (s/n) ",'s','n');
				if(respuesta == 's')
				{
					strcpy(recaudaciones[posicionID].estado,"refinanciar");
				}
			}
			else
			{
				printf("\nID Invalida");
			}
			break;
		case 6:
			if(!buscarIdRecaudacion(recaudaciones,MAXIMO_RECAUDACIONES,&posicionID,"Ingrese el ID de la Recaudacion: "))
			{

				imprimeContribuyentePorID(contribuyentes,MAXIMO_CONTRIBUYENTES,recaudaciones[posicionID].idContribuyente);
				validacionCaracterFijos(&respuesta,"¿Desea cambiar el estado de esta recaudacion a saldada: ? (s/n) ",'s','n');
				if(respuesta == 's')
				{
					strcpy(recaudaciones[posicionID].estado,"saldada");
				}
			}
			else
			{
				printf("\nID Invalida");
			}
			break;
		case 7:
			imprimirContribuyentes(contribuyentes,MAXIMO_CONTRIBUYENTES,recaudaciones,MAXIMO_RECAUDACIONES);
			break;
		case 8:
			imprimirRecaudacionesSaldadas(recaudaciones,MAXIMO_RECAUDACIONES,contribuyentes,MAXIMO_CONTRIBUYENTES);
			break;
		case 9:
			do
			{
				menuInformes(&opcionSecundaria,"Opcion: ");
				switch(opcionSecundaria)
				{
				case 1:
					break;
				case 2:
					break;
				case 3:
					break;
				case 4:
					break;
				case 5:
					break;
				}
			}while(opcionSecundaria != 5);
			break;
		case 10:
			break;
		default:
			printf("Opcion Invalida");
			break;
		}
	}while(opcionPrincipal != 10);


	return EXIT_SUCCESS;
}
