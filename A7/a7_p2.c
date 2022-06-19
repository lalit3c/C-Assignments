#include<stdio.h>
#include<stdlib.h>

struct Node  {
	char data;
	struct Node* next;
	struct Node* prev;
};

struct Node* head;

struct Node* GetNewNode(char x) {
	struct Node* newNode
		= (struct Node*)malloc(sizeof(struct Node));
	newNode->data = x;
	newNode->prev = NULL;
	newNode->next = NULL;
	return newNode;
}

void InsertAtHead(char x) {
	struct Node* newNode = GetNewNode(x);
	if(head == NULL) {
		head = newNode;
		return;
	}
	head->prev = newNode;
	newNode->next = head;
	head = newNode;
}

void Print() {
	struct Node* temp = head;
	printf("Forward: ");
	while(temp != NULL) {
		printf("%c ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}

void ReversePrint() {
	struct Node* temp = head;
	if(temp == NULL) return;
	while(temp->next != NULL) {
		temp = temp->next;
	}
	printf("Reverse: ");
	while(temp != NULL) {
		printf("%c ",temp->data);
		temp = temp->prev;
	}
	printf("\n");
}
void delete_item(char c)
{
    if(head->data == c)
    {
        struct Node* temp = head;
        head = head->next;
        head->prev = NULL;
        temp-> next = temp->prev =NULL;
        free(temp);
    }
    else
    {
        struct Node* temp = head;
        while(temp->next->data != c)
        {
            temp = temp->next;
            struct Node* temp2 = temp->next;
            temp->next = temp2->next;
            temp2->next->prev = temp;
            temp2->next = temp2->prev = NULL;
            free(temp2);

        }
    }

}

int main() {


	head = NULL;
	while(1)
    {
        int i;
        char c,d;
        scanf("%d",&i);
        switch(i)
        {
        case 1:
			getchar();
            scanf("%c",&c);
            InsertAtHead(c);
            break;
        case 2:
            scanf("%c",&d);
            delete_item(d);
            break;
        case 3:
            Print();
            break;
        case 4:
            ReversePrint();
            break;
        case 5:
            exit(1);

        }
    }

}
