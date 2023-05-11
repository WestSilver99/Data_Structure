#include <stdio.h>
#include <stdlib.h>

typedef struct _Node {
	int data;
	struct Node* next;
}Node;

int main(void) {

	Node* head = malloc(sizeof(Node));

	Node* node1 = malloc(sizeof(Node));
	head->next = node1;
	node1->data = 10;

	Node* node2 = malloc(sizeof(Node));
	node1->next = node2;
	node2->data = 20;
	node2->next = NULL;

	Node* curr = head->next;

	while (curr != NULL) {
		printf("%d\n", curr->data);
		curr = curr->next;
	}

	free(head);
	free(node1);
	free(node2);

	return 0;
}