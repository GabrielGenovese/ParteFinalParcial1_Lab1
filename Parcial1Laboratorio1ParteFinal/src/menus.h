#ifndef MENUS_H_
#define MENUS_H_

/*brief Imprime un menu y pide el ingreso de una de sus opciones, devolviendo el valor por referencia.
 * param1 Variable donde se guardara por referencia la opcion Ingresada, Tipo int*
 * param2 Mensaje que se imprimira al pedir una opcion, Tipo char[].
 * return retorna 0 si no hubo problemas, y -1 si hubo algun error.
 * */
int menu(int* opcElegida, char mensaje[]);


/*brief Imprime un menu y pide el ingreso de una de sus opciones, devolviendo el valor por referencia.
 * param1 Variable donde se guardara por referencia la opcion Ingresada, Tipo int*
 * param2 Mensaje que se imprimira al pedir una opcion, Tipo char[].
 * return retorna 0 si no hubo problemas, y -1 si hubo algun error.
 * */
int menuModificar(int* opcElegida, char mensaje[]);


int menuInformes(int* opcElegida, char mensaje[]);

#endif /* MENUS_H_ */
