#include "main.h"

#DEFINE LABEL_SUM = "suma"
#DEFINE LABEL_PROD = "prod"

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
	fgets(input); // get first input
	while(input != LABEL_SUM && input != LABEL_PROD){ // while not sum or prod
		//validate and translate to double
		data.push(number)
		fgets(input);
	}
	
	// check type of function (prod or sum)
	if(input == LABEL_PROD){
		isProd = true;
	} else {
		isProd = false;
	}
	
	// do the math
	if(isProd){
		// mult function
	} else {
		// sum function
	}
	
	// print answer
	return 0;
}