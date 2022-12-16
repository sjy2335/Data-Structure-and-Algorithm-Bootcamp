#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "SinglyLinkedList.h"

// Create an empty linked list
linkedList_h* createLinkedList_h(void) {
  linkedList_h* L;
  L = (linkedList_h*)malloc(sizeof(linkedList_h));
  L->head = NULL;
  return L;
}

// Free all memories
void freeLinkedList(linkedList_h* L) {
	while (L->head != NULL) {
		listNode* tmp = L->head;
		L->head = tmp->link;
		free(tmp);
	}
}

// Print all nodes
void print(linkedList_h* L) {
	listNode* tmp = L->head;
	if (tmp == NULL)
	{
		printf("List Empty.\n");
		return;
	}
	while (tmp->link != NULL) {
		printf("%s -> ", tmp->data);
		tmp = tmp->link;
	}
	printf("%s\n", tmp->data);
}

// Insert new node at front
void push_front(linkedList_h* L, char* x) {
	// Create new node
	listNode* new = (listNode*)malloc(sizeof(listNode));
	strcpy(new->data, x);
	new->link = NULL;

	if (L->head != NULL) new->link = L->head;
	L->head = new;
}

// Insert new node at back
void push_back(linkedList_h* L, char* x) {
	// Create new node
	listNode* new = (listNode*)malloc(sizeof(listNode));
	strcpy(new->data, x);
	new->link = NULL;

	// Finding back
	listNode* tmp = L->head;
	if (L->head == NULL) {
		L->head = new;
		return;
	}
	while (tmp->link != NULL) {
		tmp = tmp->link;
	}
	tmp->link = new; //attach
}

// Insert new node behind pre node
void insert(linkedList_h* L, listNode* pre, char* x) {
	if (pre == NULL)
	{
		printf("Not Found.\n");
		return;
	}
	// Create new node
	listNode* new = (listNode*)malloc(sizeof(listNode));
	strcpy(new->data, x);
	new->link = pre->link;
	pre->link = new;
}

// Delete node p
void erase(linkedList_h* L, listNode* p) {
	if (p == NULL)
	{
		printf("Not Found.\n");
	}
	else if (p == L->head)
	{
		L->head = p->link;
		free(p);
	}
	else{
		listNode* pre = find_pre(L, p);
		pre->link = p->link;
		free(p);
	}
}

// Delete node at front
void pop_front(linkedList_h* L) {
	listNode* tmp = L->head;
	if (tmp == NULL)
	{
		return;
	}
	L->head = tmp->link;
	free(tmp);
}

// Delete node at back
void pop_back(linkedList_h* L) {
	listNode* tmp = L->head;
	if (tmp == NULL)
	{
		printf("List Empty.\n");
		return;
	}
	if (tmp->link == NULL) {
		free(tmp);
		L->head = NULL;
		return;
	}
	while (tmp->link->link != NULL) {
		tmp = tmp->link;
	}
	free(tmp->link);
	tmp->link = NULL;
}

// Search node which contains x
listNode* find(linkedList_h* L, char* x) {
	int found = 0;
	listNode* where = NULL;

	listNode* tmp = L->head;
	while (tmp != NULL) {
		if (!strcmp(tmp->data, x)) 
		{
			found = 1;
			where = tmp;
			break;
		}
		tmp = tmp->link;
	}
	if (!found) {
		return NULL;
	}
	else {
		return where;
	}
}

// Reverse the order of nodes in list
linkedList_h* reverse(linkedList_h* L) {
	linkedList_h* L2 = createLinkedList_h();
	listNode* tmp = L->head;
	while (tmp != NULL) {
		push_front(L2, tmp);
		tmp = tmp->link;
	}
	freeLinkedList(L);
	free(L);
	return L2;
}

listNode* find_pre(linkedList_h* L, listNode* p) {
	listNode* where = NULL;
	listNode* tmp = L->head;
	while (tmp->link != NULL)
	{
		if (tmp->link == p) {
			where = tmp;
			return tmp;
		}
	}
}