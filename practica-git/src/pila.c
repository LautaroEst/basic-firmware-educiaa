//  ****** TP0 sistemas embebidos *****
#include <stdio.h>
#include <string.h>
#include <stdlib.h> // malloc, free

// lista enlazada :
typedef struct nodo{
	float value ;
	struct nodo* next;
}Nodo;

// pila :
typedef struct pila{
	Nodo *first;
	unsigned int size;  // saber la cantidad de nodos
}Pila ;


// booleano ;
typedef enum{false,true} bool_t;


// constructor de nodo :
Nodo* BuildNodo(float  value){
	
	Nodo *nodo = (Nodo *)malloc(sizeof(Nodo)) ;
	nodo->value = value ;
	nodo->next = NULL;
	return nodo;
}


// destructor de nodos:S
bool_t DestructorNodo(Nodo *nodo){

	nodo->next = NULL;
	free(nodo) ;	

	return true;
}

// apilar 
bool_t Push(Pila *pila, float value){
	
	Nodo *nodo = BuildNodo(value);
	nodo->next = pila->first ; // apilo 
	pila->first = nodo ;       // puntero al ultimo !
	pila->size ++ ;	 // simo un nodo mas 
		
	return true;
}

// Desapilar 
bool_t Pop(Pila *pila){
	if(pila->first !=NULL){
		Nodo *freeNodo = pila->first ;  // desengancho el nodo a eliminar	
		pila->first = pila->first->next ; // apunto al siguiente
		DestructorNodo(freeNodo) ;    //borro el nodo
	}
	
	pila->size -- ;  //  decremento un nodo
	return true;
}


// constructor de la pila 
Pila*  BuildPila(Pila *pila)
{
	pila= (Pila *)malloc(sizeof(Pila)) ;
	
	if(pila!=NULL){ 	
		pila->first = NULL ;  
		pila->size = 0 ;       	
	}
	
	return pila;  // una pila vacia, sin nodo
}

// destructor de la pila
void DestructorPila(Pila* pila)
{
	while(pila->first != NULL ){ Pop(pila); }
	free(pila) ;  // elimino la pila vacia !
}

float SumaPila(Pila* pila)
{
	float sum = 0 ;
	Nodo *nodo = pila->first ;
	while(nodo->next != NULL ){
		//printf("%.6f \n ",nodo->value) ;
		sum = sum + nodo->value  ;
		nodo = nodo->next ;
	}
	return sum + nodo->value ; // me flato el ulimo nodo
}

double ProdPila(Pila* pila)
{
	double prod = 1 ;
	Nodo *nodo = pila->first ;
	while(nodo->next != NULL ){
		prod = prod*nodo->value  ;
		nodo = nodo->next ;
	}
	return prod*nodo->value ; // me flato el ulimo nodo
}

// main principal
/*int main(void)
{
	float sumatoria = 0 ;
	float productoria = 0 ;
	Pila *myPila=NULL ; // Puntero a pila 	
	myPila = BuildPila(myPila) ; // pila


	Push(myPila,3.2) ;
	Push(myPila,5.2) ;	
	Push(myPila,2.6) ;	
	Push(myPila,4.54) ;
	sumatoria = SumaPila(myPila) ;
	productoria = ProdPila(myPila) ;
	
//	printf(" Nodo->value : %.6f \n", myPila->first->value) ;
	//	printf(" Nodo->size : %d \n", myPila->size) ;		
	DestructorPila(myPila) ;

	
	//printf("la suma es  :%.6f \n", sumatoria) ;
	//printf("El porducto es : %.6f \n", productoria) ;

	return 0;

}*/

