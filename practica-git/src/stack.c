#include <stdio.h>
#include <stdlib.h>
#include <stack.h>

stack_t* stack_create(void){
	stack_t* new_obj = (stack_t*) malloc(sizeof(stack_t));
	new_obj->data = 0;
	new_obj->next = NULL;
	return new_obj;
}

void stack_destroy(struct stack_t** sp){
	stack_t* current_obj = *sp;
	stack_t* next_obj;

	if(sp == NULL) return;

	do{
		next_obj = current_obj->next;
		free(current_obj);
		current_obj = next_obj;
	}
	while(current_obj != NULL);
}

int stack_push(struct stack_t* sp, double d){
	stack_t* new_obj = (stack_t *)malloc(sizeof(stack_t));
	
	if(new_obj == NULL) return EXIT_FAILURE;
	new_obj->data = d;
	sp->next = new_obj;
	return EXIT_SUCCESS;
}

double stack_pop(struct stack_t** sp){
	stack_t* second_obj = (*sp)->next;
	double num = (*sp)->data;

	free(*sp);
	(*sp) = second_obj;
	return num;
}


