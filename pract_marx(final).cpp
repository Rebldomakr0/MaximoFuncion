#include <stdio.h>

/*NOTA: paso de parametros por referencia: "*"= usar el contenido de variable en main "&"=apunta a variable*/

/*CORRECCIONES (22/06/23): 1. Para la funcion void se eliminan los "&", pues el main se encarga de leerlos y registrarlos en memoria.
                2. Se elimina el "int" de la funcion maximo, pues no realiza return (vease paso de parametros por referencia).
                3. Se elimina el "else if" de la funcion maximo para que compare los tres valores de la funcion max. ELSE IF solo aplica si el primer if no es verdadero. n1 sera (casi) siempre mayor que 0.
                */

void leer_datos(int * n1, int * n2, int * n3);
int maximo(int , int , int , int * );

int main(){
	int n1, n2, n3;
	int max=0;
	
	leer_datos(&n1, &n2, &n3);
	maximo(n1, n2, n3, &max);
	
	printf("\nEl maximo de los valores ingresados es: %d\n", max);
	
	return 0;
}

void leer_datos(int * n1, int * n2, int * n3){

	printf("Ingrese el primer valor: ");
	scanf("%d", n1);
	printf("\nIngrese el segundo valor: ");
	scanf("%d", n2);
	printf("\nIngrese el tercer valor: ");
	scanf("%d", n3);

}

maximo(int n1, int n2, int n3, int *max){
	
	    if(n1 > *max){
		*max=n1;
	}
	   if(n2 > *max){
		*max=n2;
	}
	   if(n3 > *max){
		*max=n3;
	}		
}

