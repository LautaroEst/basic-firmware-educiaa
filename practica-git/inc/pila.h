
#ifndef __PILA__
#define	__PILA__

#include <stdio.h>
#include "../inc/validation.h"
// lista enlazada :
typedef struct node{
	float value ;
	struct node* next;
}Node;

// pila :
typedef struct pila{
	Node *first;
	unsigned int size;  // saber la cantidad de nodos
}Pila ;


Node* buildNode(float  value);
bool_t destrucNode(Node *node);
bool_t push(Pila *pila, float value);
bool_t pop(Pila *pila);
Pila*  buildPila(Pila *pila);
void destructPila(Pila* pila);
float sumPila(Pila* pila) ;
double prodPila(Pila* pila);



#endif
