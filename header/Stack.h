#ifndef STACK_H
#define STACK_H


			/*Shared constants*/

#define Stack_EmptyStack INT_MIN
#define EmptyStack (-1)


			/*Array prototypes*/
#define ArrayMAXLENGTH	4096
#define Array_Length ArrayMAXLENGTH

typedef struct ArrayStack {
	sint32_t top;
	sint32_t structArray[Array_Length];
	
}arrayStack;
	
_bool Array_Push(arrayStack*, sint32_t);

sint32_t Array_Pop(arrayStack*);

sint32_t Array_Top(arrayStack*);

#define _LinkedList
			/*LINKED LIST prototypes  */

typedef struct Stack {
	sint32_t value;
	struct Stack* next;

}Stack_Node;

typedef Stack_Node* _stack_node;

_bool LL_Push(_stack_node*, int);
sint32_t LL_Pop(_stack_node*);
sint32_t LL_Top(_stack_node*);
_bool LL_IsEmpty(_stack_node*);




#endif // !STACK_H
