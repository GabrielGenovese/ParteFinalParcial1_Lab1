#ifndef INFORMES_H_
#define INFORMES_H_


/*brief Imprime todos los datos de un elemento del array contribuyentes con todos los datos de sus recaudaciones.
 * param1 Array de tipo eContribuyente.
 * param2 Cantidad de elementos del array contribuyentes, Tipo int.
 * param3 Array de tipo eRecaudacion.
 * param4 Cantidad de elementos del array recaudaciones, Tipo int.
 * return retorna 0 si no hubo problemas, y -1 si hubo algun error.
 * */
int imprimirContribuyentes(eContribuyente contribuyentes[],int tamanioContribuyentes, eRecaudacion recaudaciones[],int tamanioRecaudaciones);


/*brief Imprime el titulo de los datos de una recaudacion, con los titulos Nombre y Cuil.
 * */
void tituloRecaudacionesConNombreCuil();


/*brief Imprime Todos los datos de un elemento del array recaudaciones sumado el Cuil y Nombre del contribuyente de esa recaudacion
pasadas por valor.
 * param1 Array de tipo eRecaudacion.
 * param2 Posicion del elemento del array recaudaciones a Imprimir, Tipo int.
 * param3 Nombre del contribuyente de la recaudacion, Tipo char [].
 * param4 Cuil del contribuyente de la recaudacion, Tipo int.
 * return retorna 0 si no hubo problemas, y -1 si hubo algun error.
 * */
int imprimeUnaRecaudacionConNombreCuil(eRecaudacion recaudaciones[], int posicion, char nombre[], char cuil[]);


/*brief Busca las recaudaciones saldadas en el array recaudaciones e imprime sus datos sumado al nombre y cuil del contribuyente de la
recaudacion.
 * param1 Array de tipo eRecaudacion.
 * param2 Cantidad de elementos del array recaudaciones, Tipo int.
 * param3 Array de tipo eContribuyente.
 * param4 Cantidad de elementos del array contribuyentes, Tipo int
 * return retorna 0 si no hubo problemas, y -1 si hubo algun error.
 * */
int imprimirRecaudacionesSaldadas( eRecaudacion recaudaciones[],int tamanioRecaudaciones, eContribuyente contribuyentes[],int tamanioContribuyentes);


#endif
