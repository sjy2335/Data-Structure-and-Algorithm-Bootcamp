#include <stdio.h>
#include <stdlib.h>

#include "cQueue.h"

QueueType* createCQueue() {
  QueueType* cQ;
  cQ = (QueueType*)malloc(sizeof(QueueType));
  cQ->front = 0;
  cQ->rear = 0;
  return cQ;
}

// Check whether queue is empty
int isEmpty(QueueType* cQ) {
	if ((cQ->front == cQ->rear)) return 1;
	else return 0;
}

// Check whether queue is full
int isFull(QueueType* cQ) {
	if ((cQ->rear + 1) % cQ_SIZE == cQ->front) return 1;
	else return 0;
}

// Push item at rear //enqueue
void push(QueueType* cQ, element item) {
	if (isFull(cQ)) {
		printf("Your Queue is Full.\n");
		return;
	}
	else {
		cQ->rear = ++cQ->rear % cQ_SIZE;
		cQ->queue[cQ->rear] = item;
	}
}

// Return item at front and delete //dequeue
element pop(QueueType* cQ) {
	cQ->front = ++cQ->front % cQ_SIZE;
	return cQ->queue[cQ->front];
}

// Return item at front
element front(QueueType* cQ) {
	return cQ->queue[(cQ->front+1)%cQ_SIZE];
}

// Return item at rear
element back(QueueType* cQ) {
	return cQ->queue[cQ->rear];
}

// Print all items
void print(QueueType* cQ) {
	if (isEmpty(cQ)) printf("Your Queue is Empty.\n");
	else {
		int tmp = cQ->front;
		//printf("front: %d rear: %d\n", cQ->front, cQ->rear);
		while (tmp != cQ->rear) {
			tmp = ++tmp % cQ_SIZE;
			printf("%d ", cQ->queue[tmp]);
		}
	}
	printf("\n");
}