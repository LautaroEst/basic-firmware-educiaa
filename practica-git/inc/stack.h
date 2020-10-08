#ifndef _STACK_H_
#define _STACK_H_

typedef struct stack_t{
	double * data;
	struct stack_t * next;
}stack_t;

struct stack_t* stack_create();
void stack_free(struct stack_t* sp);
void stack_push(struct stack_t* sp, double d);
double stack_pop(struct stack_t* sp);

#endif
