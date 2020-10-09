
#ifndef __FUNCTIONS__
#define __FUNCTIONS__

#include "functions.h"

#define MENU_OPTION_SUM "sum"
#define MENU_OPTION_PRODUCT "sum"

// boot_t

 typedef enum{flase,true}bool_t ;


// funciones matematicas 

float sum(float *var1,float *var2)
{
	return *var1 + *var2;
}

float prod(float *var1, float *var2)
{
	return (*var1)*(*var2);
}

//typedef enum{false,true}bool_t ;
//typedef enum{sum,prod}option_t ;

// validaciones

// retorna un TRUE cundo el str es un numero y considera el signo, usar atof ????

bool_t validate_number(char *str)
{
    bool_t condition = true ;
    unsigned int index = 0 ;

    if( isdigit(str[index]) == 0 )   // no es un numero ??
    {
    	if( str[index]!='-' ) { return false ;}        // no es el signo negativo ?
    }
    while( str[++index] != '\0')
    {
        if( isdigit(str[index])==0 )
        {
            if( str[index]!='.' ){ condition=false ; break ;}
        }
    }

    return condition ;
}

// retorna un true cuando el str es  "sum" o "prod"

bool_t validate_alphabet(char *str)
{
    bool_t condition = true ;
    unsigned int index =0 ;

    while( str[index] != '\0')
    {
        if(isalpha(str[index])!=0 ) ++index ;
        else {condition= false ; break ;}
    }

    return condition ;
}


bool_t validate_option(char *str){

    bool_t condition = false ;

    if(strcmp(str,MENU_OPTION_SUM) != 0){
        if(strcmp(str,MENU_OPTION_PRODUCT) != 0 ){condition = false ;}
        else condition=true ;
    }
    else condition = true ;

    return condition;
}

#endif

