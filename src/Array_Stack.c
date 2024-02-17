#include "Types.h"
#include <stdio.h>
#include <stdlib.h>
#include"Stack.h"

#define _Array

_bool Array_Push(arrayStack* arrayStack, sint32_t value) {
	if (arrayStack->top > Array_Length - 1)
		return false;

	arrayStack->top++;
	if (arrayStack->top < Array_Length - 1)
	{
		arrayStack->structArray[arrayStack->top] = value;
	}

	return true;
}

sint32_t Array_Pop(arrayStack* arrayStack) {

	if (arrayStack->top == EmptyStack)
		return Stack_EmptyStack;
	sint32_t result = arrayStack->structArray[arrayStack->top];
	arrayStack->top--;

	return result;
}


sint32_t Array_Top(arrayStack* arrayStack) {
	
	
	return arrayStack->structArray[arrayStack->top];
}