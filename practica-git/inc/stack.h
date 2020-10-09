#ifndef __STACK_H__
#define __STACK_H__

#include <stdbool.h>

typedef struct stack_t{
	unsigned size;
	struct stack_t* data;
}stack_t;

void push(double data);
int pop(void);
bool empty(void);


#endif