#ifndef RECAUDACION_H_
#define RECAUDACION_H_

#define TEXT_LENG 21

typedef struct
{
	int idContribuyente;
	int idRecaudacion;
	int mes;
	int tipo;
	float importe;
	char estado[TEXT_LENG];
	int isEmpty;
}eRecaudacion;


/*brief Inicializa todos los elementos del array recaudaciones en vacio (isEmpty = 1)
 * param1 Array de tipo eRecaudacion.
 * param2 Cantidad de elementos del array.
 * return retorna 0 si no hubo problemas, y -1 si hubo algun error.
 * */
int inicializacionRecaudacion(eRecaudacion recaudaciones[], int cantidadElementos);


/*brief Imprime el titulo de los datos de una recaudacion.
 * */
void tituloRecaudaciones();


/*brief Imprime ARBA, IIBB o GANANCIAS dependiendo del valor pasado por parametros 1, 2 o 3
 * param1 Valor para diferenciar los 3 diferentes tipos, Tipo int.
 * return retorna 0 si no hubo problemas, y -1 si hubo algun error.
 * */
int imprimeTipo(int tipo);


/*brief Imprime los datos de una recaudacion del array recaudaciones
 * param1 Array de tipo eRecaudacion.
 * param2 Posicion del elemento a imprimir, en el array recaudaciones, Tipo Int.
 * return retorna 0 si no hubo problemas, y -1 si hubo algun error.
 * */
int imprimeUnaRecaudacion(eRecaudacion recaudaciones[], int posicion);


/*brief Busca un elemento del array recaudaciones en el que su idContribuyente coincida con el id pasado por parametros y si
lo encuentra imprime sus datos.
* param1 Array de tipo eRecaudacion.
* param2 Cantidad de elementos del array de tipo int.
* param3 Id de un contribuyente pasada por valor, Tipo int.
* return retorna 0 si no hubo problemas, y -1 si hubo algun error.
 * */
int imprimeRecaudacionesPorIDContribuyente(eRecaudacion recaudaciones[], int cantidadElementos, int idContribuyente);


/*brief Hace la baja logica, pone un elemento en vacio (isEmpty = 1), de un elemento del array recaudaciones.
 * param1  Array de tipo eRecaudacion.
 * param2 Posicion del elemento a hacer la baja logica, en el array recaudaciones, Tipo Int.
 * return retorna 0 si no hubo problemas, y -1 si hubo algun error.
 * */
int bajaLogicaRecaudacionesPorIDContribuyente(eRecaudacion recaudaciones[], int cantidadElementos, int idContribuyente);


/*brief Busca un elemento vacio en el array recaudaciones y devuelve la posicion de este en el array, por referencia.
 * param1 Array de tipo eRecaudacion.
 * param2 Cantidad de elementos del array de tipo int.
 * param3 Variable donde se guardara el indice pasado por referencia, Tipo int*.
 * return retorna 0 si no hubo problemas, y -1 si hubo algun error.
 * */
int buscarLibreRecaudacion(eRecaudacion recaudaciones[], int cantidadElementos, int* indice);


/*brief Hace las validaciones de datos e ingresa los datos en un elemento del array recaudaciones, suma +1 al contador
idRecaudaciones despues del ingreso y validaciones, y asigna ese elemento en uso (isEmpty = 0).
 * param1 Array de tipo eRecaudacion.
 * param2 Posicion del elemento en el array recaudaciones, Tipo Int.
 * param3 Id de la recaudacion al que se le esta agregando los datos,Tipo int*.
 * param4 Id del contribuyente al que pertenece esta recaudacion, Tipo int.
 * return retorna 0 si no hubo problemas, y -1 si hubo algun error.
 * */
int ingresoDatosRecaudacion(eRecaudacion recaudaciones[],int posicion, int* idRecaudaciones, int idContribuyente);


/*brief Pide un id y lo busca entre los ids de todos los elementos del array recaudaciones, si lo encuentra devuelve la posicion del
elemento en el array, por referencia.
 * param1 Array de tipo eRecaudacion.
 * param2 Cantidad de elementos del array, Tipo int.
 * param3 Variable donde se guardara la posicion del elemento que su id coincide con el id ingresado, Tipo int*.
 * param4 Mensaje que se mostrara cuando pida el id, Tipo Char [].
 * return retorna 0 si no hubo problemas, y -1 si hubo algun error.
 * */
int buscarIdRecaudacion(eRecaudacion recaudaciones[],int cantidadElementos, int* posicionID,char mensaje[]);

#endif /* RECAUDACION_H_ */
