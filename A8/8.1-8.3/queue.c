/*
CH-230-A
a8_p2.c
Lalit Chaudhary
lchaudhary@jacobs-university.de
*/

/**
 * @file queue.c
 */

#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

/*initialise an empty queue pq*/
void initialize_queue(Queue *pq)
{
	pq->front = pq->rear = NULL;
	pq->items = 0;
}

/*checks if the queue pq is full */
int queue_is_full(const Queue *pq)
{
	return pq->items == MAXQUEUE;
}

/*checks if the queue pq is empty */
int queue_is_empty(const Queue *pq)
{
	return pq->items == 0;
}

/*counts the number of nodes in queue pq*/
int queue_item_count(const Queue *pq)
{
	return pq->items;
}

/*add item as node to queue pq */
int enqueue(Item item, Queue *pq)
{
	
	Node *newel = (Node*) malloc (sizeof(Node));
	if(newel == NULL)
	{
		printf("Memory allocation error!");
		exit(1);
	}

	newel->item = item;
	newel->next = NULL;

	if(queue_is_empty(pq))
		pq->front = newel;
	else
		pq->rear->next = newel;

	pq->rear = newel;
	pq->items++;

    return 0;
}

/*remove the first item of the queue*/
int dequeue(Item *pitem, Queue *pq)
{
	Node* temp = (Node*) malloc (sizeof(Node));
	if(temp == NULL)
	{
		printf("Memory allocation error!");
		exit(1);
	}
	temp = pq->front;
	*pitem = temp->item;
	pq->front = pq->front->next;
	free(temp);
	pq->items--;
	
	/*if the last item is removed*/
	if(queue_is_empty(pq))
	{
		pq->front = NULL;
		pq->rear = NULL;
	}

	return 0;
}

void empty_queue(Queue *pq)
{
	Item dummy;
	while (!queue_is_empty(pq)) {
		dequeue(&dummy, pq);
	}
}

/*print the items of a queue*/
void print_queue(Queue *pq)
{
	Node *cursor = pq->front;
	while(cursor != NULL)
	{
		printf("%d ", cursor->item);
		cursor = cursor->next;
	}
	printf("\n");
}