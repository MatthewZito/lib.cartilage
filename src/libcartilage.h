#ifndef LIBCARTILAGE_H
#define LIBCARTILAGE_H

#include <stdint.h>

#define COUT(c) printf(#c " = %c\n", c)
#define DOUT(c) printf(#c " = %d\n", c)

/*****************************
 *	CircularSinglyLinkedList
 *****************************/

typedef struct CircularSinglyLinkedList;

typedef struct ForwardNode {
	char data;
	struct ForwardNode* next;
	struct CircularSinglyLinkedList* list;
} ForwardNode_t;

typedef struct CircularSinglyLinkedList {
	ForwardNode_t* head;
	uint32_t size;
} CircularSinglyLinkedList;

CircularSinglyLinkedList* make_list(void);

ForwardNode_t* __make_node(char value);

ForwardNode_t* push_back(CircularSinglyLinkedList* ll, char value);

ForwardNode_t* push_front(CircularSinglyLinkedList* ll, char value);

void iterate(CircularSinglyLinkedList* ll, void (*callback)(void*));

ForwardNode_t* next(CircularSinglyLinkedList* ll, ForwardNode_t* node);

ForwardNode_t* prev(CircularSinglyLinkedList* ll, ForwardNode_t* node);

ForwardNode_t* remove_node(CircularSinglyLinkedList* ll, ForwardNode_t* node);

ForwardNode_t* pop(CircularSinglyLinkedList* ll);

ForwardNode_t* insert_after(CircularSinglyLinkedList* ll, char value, ForwardNode_t* mark);

ForwardNode_t* insert_before(CircularSinglyLinkedList* ll, char value, ForwardNode_t* mark);

int move_before(CircularSinglyLinkedList* ll, ForwardNode_t* node, ForwardNode_t* mark);

int move_after(CircularSinglyLinkedList* ll, ForwardNode_t* node, ForwardNode_t* mark);

CircularSinglyLinkedList* push_back_list(CircularSinglyLinkedList* ll, CircularSinglyLinkedList* other);

CircularSinglyLinkedList* push_front_list(CircularSinglyLinkedList* ll, CircularSinglyLinkedList* other);

#endif
