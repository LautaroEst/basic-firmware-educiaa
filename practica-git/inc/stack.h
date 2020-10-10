#ifndef __STACK_H__
#define __STACK_H__

#include <stdbool.h>

typedef struct stack_t{
	unsigned size = 0;
	struct stack_t* data = NULL;
}stack_t;

void push(double data);
double pop(void);
bool empty(void);


#endif