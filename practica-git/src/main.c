#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef enum operacion_t{SUMA,MULTIPLICACION}operacion_t;


double sumar(double a,double b){
	return a + b;
}

double multiplicar(double a,double b){
	return a * b;
}

int main(int argc, char const *argv[]){
	double acumulado;
	double number;
	double (*op_ptr)(double,double);

	//Validacion de argumentos
	if(argc < 3){
		puts("Faltan argumentos");
		return EXIT_FAILURE;
	}

	if(!strcmp(argv[argc-1],"sum")){
		op_ptr = &sumar;
		acumulado = 0;
	}
	else if(!strcmp(argv[argc-1],"mult")){
		op_ptr = &multiplicar;
		acumulado = 1;
	}	
	else{
		puts("Operacion invalida");
		return EXIT_FAILURE;
	}
	
	for(register int i=1 ; i<argc-1 ; i++){
		number = atof(argv[i]);
		if(number < 1 || number > 10){
			puts("Numero invalido. El numero ingresado debe estar entre 1 y 10");
			return EXIT_FAILURE;
		}else{
			acumulado = op_ptr(acumulado,number);
		}
	}
	
	printf("%s %.2f\n","El resultado es:",acumulado);	
	return EXIT_SUCCESS;
}