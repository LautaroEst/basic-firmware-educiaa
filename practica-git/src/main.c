#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stack.h>

typedef enum operacion_t{SUM,MULT}operacion_t;
stack_t * numStack = NULL;

void free_mem(){
	stack_destroy(&numStack);
}

int main(int argc, char const *argv[]){
	operacion_t operacion;
	double acumulado = 0;
	double number;

	//Validacion de argumentos
	if(argc < 3){
		puts("Faltan argumentos");
		return EXIT_FAILURE;
	}

	numStack = stack_create();
	atexit(free_mem);

	for(register int i=1 ; i<argc ; i++){
		number = atof(argv[i]);
		if(number < 1 || number > 10){
				puts("Numero invalido. El numero ingresado debe estar entre 1 y 10");
		return EXIT_FAILURE;
		}else{
			stack_push(numStack,number);
		}
	}
	
	if(strcmp(argv[argc-1],"sum")){
		operacion = SUM;
	}
	else if(strcmp(argv[argc-1],"mult")){
		operacion = MULT;
	}	
	else{
		puts("Operacion invalida");
		return EXIT_FAILURE;
	}

	while(!(number = stack_pop(&numStack))){
		switch(operacion){
			case SUM:
				acumulado = acumulado * number;
				break;
			case MULT:
				acumulado = acumulado + number;
				break;
			default:
				break;
		}	
	}
	

	printf("%s%f\n","El resultado es:",acumulado);	
	return EXIT_SUCCESS;
}