#include "Types.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "Stack.h"

#ifdef _LinkedList


_bool LL_Push(_stack_node* stackNode, sint32_t value) {
	
	Stack_Node* newNode = (Stack_Node*)malloc(sizeof(struct Stack));
	
	if (newNode == NULL)
		return false;
	
	newNode->value = value;
	newNode->next = *stackNode;
	*stackNode = newNode;
	return true;

}
sint32_t LL_Pop(_stack_node* stack) {
	
	if ((*stack) == NULL)
		return Stack_EmptyStack;
	
	sint32_t result = (*stack)->value;
	Stack_Node* newNode = (*stack);
	*stack = (*stack)->next;
	free(newNode);

	return result;
}

sint32_t LL_Top(_stack_node* stackNode) {
	return (*stackNode)->value;
}

_bool LL_IsEmpty(_stack_node* stack) {

	return (*stack) == NULL;
}

#endif