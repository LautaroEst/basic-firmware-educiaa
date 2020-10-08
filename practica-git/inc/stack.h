#ifndef __STACK_H__
#define __STACK_H__

typedef struct stack_t{
	unsigned size;
	stack_t data;
}

void push(double data);
int pop(void);
bool_t empty(void);


#endif