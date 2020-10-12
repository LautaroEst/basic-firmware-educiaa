
#ifndef __VALIDATION__
#define __VALIDATION__

#include <stdio.h>
#include <stdlib.h>

typedef enum{false,true}bool_t ;

bool_t isNumber(char *str);
bool_t isAlphabet(char *str);
bool_t isOption(char *str);

#endif
