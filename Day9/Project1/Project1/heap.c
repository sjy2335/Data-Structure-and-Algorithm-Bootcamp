#include "heap.h"
#include <stdio.h>
#include <stdlib.h>

// Create an empty heap
heapType* createHeap() {
  heapType* h = (heapType*)malloc(sizeof(heapType));
  h->heap_size = 0;
  return h;
}

// Insert node that has item to heap
void push(heapType* h, int item) {
	int i;
	if (h->heap_size == MAX_ELEMENT) {
		printf("Your Heap is Full.\n");
		return;
	}
	h->heap_size++;
	for (i = h->heap_size; i != 1; i /= 2) {
		if (item <= h->heap[i/2-1]) break;
		h->heap[i - 1] = h->heap[i / 2 - 1];
	}
	h->heap[i - 1] = item;
}

// Return root
int top(heapType* h) {
	return h->heap[0];
}

// Remove root
void pop(heapType* h) {
	int n = h->heap_size;
	if (n == 0) {
		return;
	}
	h->heap_size--;
	int tmp = h->heap[n-1];
	int i = 1, j = 2;
	while (j <= n) {
		if (j < n) {
			if (h->heap[j - 1] < h->heap[j]) j++;
		}
		if (tmp >= h->heap[j-1]) break;
		else {
			h->heap[i - 1] = h->heap[j - 1];
			i = j;
			j *= 2;
		}
		h->heap[i - 1] = tmp;
	}
}

// Print
void print(heapType* h) {
	if (h->heap_size == 0) {
		printf("Your Heap is Empty.\n");
	}
	for (int i = 0; i < h->heap_size; i++) {
		printf("%d ", h->heap[i]);
	}
	printf("\n");
}

// Return number of elements
int size(heapType* h) {
	return h->heap_size;
}