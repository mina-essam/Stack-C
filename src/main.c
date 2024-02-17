#include "Types.h"
#include <stdio.h>
#include <limits.h>
#include "Stack.h"

int main() {
	
	_stack_node s1 = NULL;
	arrayStack  s7 = { EmptyStack, NULL};
	
	LL_Push(&s1, 12);
	LL_Push(&s1, 10);
	LL_Push(&s1, 15);
	LL_Push(&s1, 17);
	

//	s7.top = EmptyStack;
	
	Array_Push(&s7, 111);
	Array_Push(&s7, 121);
	Array_Push(&s7, 131);
	Array_Push(&s7, 141);


	printf("Hello Jesus Christ!\n"); 
	printf("the top of the stack = %d\n", LL_Top(&s1));
	if (!LL_IsEmpty(&s1)) {
		printf("stack is not Empty\n");
	}
	int v;
	while (((v = LL_Pop(&s1))) != Stack_EmptyStack)
	{
		printf("value = %d\n", v);
	}
	if (LL_IsEmpty(&s1)) {
		printf("stack is Empty\n");
	}
	printf("the top of the Array = %d\n", Array_Top(&s7));
	int a;
	while (((a = Array_Pop(&s7))) != Stack_EmptyStack)
	{
		printf("Array value(s) = %d\n", a);
	}
	return 0;
}