#include "main.h"



// ------------ //
// --- Main --- //
// ------------ //
int main(void){
	
	// variables used
	char* input; // input string
	stack_t data; // numbers stack
	double number; // number parsed
	double ans; // answer
	bool isProd;
	
	// collect numbers
	fgets(input,10,stdin); // get first input
	while(strcmp(input,LABEL_SUM) && strcmp(input, LABEL_PROD)){ // while not sum or prod
		//validate and translate to double
		number = atof(input);
		if(number != 0){
			push(number);
		}
		//collect again
		fgets(input,10,stdin);
	}
	
	// check type of function (prod or sum)
	if(strcmp(input,LABEL_SUM)){
		ans = sumStack(data);
	} else {
		ans = prodStack(data);
	}
	
	// print answer
	fprintf(stdout,"Resultado: %d",ans);
	return 0;
}