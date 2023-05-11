#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// ���Ḯ��Ʈ ��� ����ü ����
typedef struct Node {
    char data;          // ������
    struct Node* next;  // ���� ����� �ּҸ� ������ ������
} Node;

// ť ����ü ����
typedef struct Queue {
    Node* front;    // ť�� �� �� ��� �ּҸ� ������ ������
    Node* rear;     // ť�� �� �� ��� �ּҸ� ������ ������
    int size;       // ť�� ����
} Queue;

// ���ο� ��� ���� �Լ�
Node* createNode(char data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("�޸� �Ҵ� ����\n");
        return NULL;
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// ť �ʱ�ȭ �Լ�
void initQueue(Queue* q) {
    q->front = NULL;
    q->rear = NULL;
    q->size = 0;
}

// ť ���� �Լ�
void enqueue(Queue* q, char data) {
    Node* newNode = createNode(data);
    if (q->rear == NULL) {
        q->front = newNode;
        q->rear = newNode;
    }
    else {
        q->rear->next = newNode;
        q->rear = newNode;
    }
    q->size++;
}

// ť ���� �Լ�
void dequeue(Queue* q) {
    if (q->front == NULL) {
        printf("�����ϴ� ���ڰ� �����ϴ�.\n");
    }
    else {
        Node* temp = q->front;
        q->front = q->front->next;
        if (q->front == NULL) {
            q->rear = NULL;
        }
        free(temp);
        q->size--;
    }
}

// ť ��� �Լ�
void printQueue(Queue* q) {
    Node* curr = q->front;
    while (curr != NULL) {
        printf("%c", curr->data);
        curr = curr->next;
    }
    printf("\n");
}

// ť ���� ��ȯ �Լ�
int getQueueLength(Queue* q) {
    return q->size;
}

int main() {
    Queue q;
    initQueue(&q);
    printf("1 ) ���� �߰�\n2 ) ���� ����\n3 ) ���ڿ� ���\n4 ) ���ڿ� ���� ��ȯ\n");
    for (int i = 0; i < 10; i++) {
        printf("\n��ȣ�� �Է��ϼ���: ");
        int input;
       
        scanf("%d", &input);

        if (input == 1) {
            printf("�߰��� ���� �Է�(���ҹ��ڸ� ����): ");
            char c;
            scanf(" %c", &c);
            if (islower(c)) {
                enqueue(&q, c);
            }
            else {
                printf("���ҹ��ڰ� �ƴմϴ�.\n");
            }
        }
        else if (input == 2) {
            dequeue(&q);
        }
        else if (input == 3) {
            printf("���� ���ڿ�: ");
            printQueue(&q);
        }
        else if (input == 4) {
            printf("���ڿ� ����: %d\n", getQueueLength(&q));
        }
        else {
            printf("�߸��� �Է��Դϴ�.\n");
        }
    }

    printf("�ϼ��� ���ڿ�: ");
    printQueue(&q);

    return 0;
}