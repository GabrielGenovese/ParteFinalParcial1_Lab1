#define TEXTO 21
#define CUIL 16

#ifndef CONTRIBUYENTE_H_
#define CONTRIBUYENTE_H_

typedef struct
{
	int idContribuyente;

	char nombre[TEXTO];
	char apellido[TEXTO];
	char cuil[CUIL];

	int isEmpty;
}eContribuyente;


/*brief Inicializa todos los elementos del array contribuyentes en vacio (isEmpty = 1)
 * param1 Array de tipo eContribuyente.
 * param2 Cantidad de elementos del array.
 * return retorna 0 si no hubo problemas, y -1 si hubo algun error.
 * */
int inicializacionContribuyente(eContribuyente contribuyentes[], int cantidadElementos);


/*brief Busca un elemento vacio en el array contribuyentes y devuelve la posicion de este en el array por referencia.
 * param1 Array de tipo eContribuyente.
 * param2 Cantidad de elementos del array de tipo int.
 * param3 Variable donde se guardara el indice pasado por referencia, Tipo int*.
 * return retorna 0 si no hubo problemas, y -1 si hubo algun error.
 * */
int buscarLibreContribuyente(eContribuyente contribuyentes[], int cantidadElementos, int* indice);


/*brief Hace las validaciones de datos e ingresa los datos en un elemento del array contribuyentes, suma +1 al contador
idContribuyente despues del ingreso y validaciones, y asigna ese elemento en uso (isEmpty = 0).
 * param1 Array de tipo eContribuyente.
 * param2 Posicion del elemento en el array contribuyentes, Tipo Int.
 * param3 Id del contribuyente al que se le esta agregando los datos,Tipo int*.
 * return retorna 0 si no hubo problemas, y -1 si hubo algun error.
 * */
int ingresoDatosContribuyente(eContribuyente contribuyentes[],int posicion, int* idContribuyente);


/*brief Imprime el titulo de los datos de un contribuyente.
 * */
void tituloContribuyente();


/*brief Imprime los datos de un contribuyente del array contribuyentes
 * param1 Array de tipo eContribuyente.
 * param2 Posicion del elemento a imprimir, en el array contribuyentes, Tipo Int.
 * return retorna 0 si no hubo problemas, y -1 si hubo algun error.
 * */
int imprimeUnContribuyente(eContribuyente contribuyentes[], int posicion);


/*brief Pide un id y lo busca entre los ids de todos los elementos del array contribuyentes, si lo encuentra devuelve la posicion del
elemento en el array por referencia.
 * param1 Array de tipo eContribuyente.
 * param2 Cantidad de elementos del array, Tipo int.
 * param3 Variable donde se guardara la posicion del elemento que su id coincide con el id ingresado, Tipo int*.
 * param4 Mensaje que se mostrara cuando pida el id, Tipo Char [].
 * return retorna 0 si no hubo problemas, y -1 si hubo algun error.
 * */
int buscarIdContribuyente(eContribuyente contribuyentes[],int cantidadElementos, int* posicionID, char mensaje[]);


/*brief Hace la baja logica, pone un elemento en vacio (isEmpty = 1), de un elemento del array contribuyentes.
 * param1  Array de tipo eContribuyente.
 * param2 Posicion del elemento a hacer la baja logica, en el array contribuyentes, Tipo Int.
 * return retorna 0 si no hubo problemas, y -1 si hubo algun error.
 * */
int bajaLogicaContribuyente(eContribuyente contribuyentes[], int posicion);


/*brief Busca un elemento del array contribuyentes que su id coincida con el id pasado por parametros y si lo encuentra imprime sus
 datos.
* param1 Array de tipo eContribuyente.
* param2 Cantidad de elementos del array de tipo int.
* param3 Id de un contribuyente pasada por valor, Tipo int.
* return retorna 0 si no hubo problemas, y -1 si hubo algun error.
 * */
int imprimeContribuyentePorID(eContribuyente contribuyentes[], int cantidadElementos, int idContribuyente);


#endif /* CONTRIBUYENTE_H_ */
