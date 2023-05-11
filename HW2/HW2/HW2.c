#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// 연결리스트 노드 구조체 정의
typedef struct Node {
    char data;          // 데이터
    struct Node* next;  // 다음 노드의 주소를 저장할 포인터
} Node;

// 큐 구조체 정의
typedef struct Queue {
    Node* front;    // 큐의 맨 앞 노드 주소를 저장할 포인터
    Node* rear;     // 큐의 맨 뒤 노드 주소를 저장할 포인터
    int size;       // 큐의 길이
} Queue;

// 새로운 노드 생성 함수
Node* createNode(char data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("메모리 할당 오류\n");
        return NULL;
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// 큐 초기화 함수
void initQueue(Queue* q) {
    q->front = NULL;
    q->rear = NULL;
    q->size = 0;
}

// 큐 삽입 함수
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

// 큐 삭제 함수
void dequeue(Queue* q) {
    if (q->front == NULL) {
        printf("존재하는 문자가 없습니다.\n");
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

// 큐 출력 함수
void printQueue(Queue* q) {
    Node* curr = q->front;
    while (curr != NULL) {
        printf("%c", curr->data);
        curr = curr->next;
    }
    printf("\n");
}

// 큐 길이 반환 함수
int getQueueLength(Queue* q) {
    return q->size;
}

int main() {
    Queue q;
    initQueue(&q);
    printf("1 ) 문자 추가\n2 ) 문자 제거\n3 ) 문자열 출력\n4 ) 문자열 길이 반환\n");
    for (int i = 0; i < 10; i++) {
        printf("\n번호를 입력하세요: ");
        int input;
       
        scanf("%d", &input);

        if (input == 1) {
            printf("추가할 문자 입력(영소문자만 가능): ");
            char c;
            scanf(" %c", &c);
            if (islower(c)) {
                enqueue(&q, c);
            }
            else {
                printf("영소문자가 아닙니다.\n");
            }
        }
        else if (input == 2) {
            dequeue(&q);
        }
        else if (input == 3) {
            printf("현재 문자열: ");
            printQueue(&q);
        }
        else if (input == 4) {
            printf("문자열 길이: %d\n", getQueueLength(&q));
        }
        else {
            printf("잘못된 입력입니다.\n");
        }
    }

    printf("완성된 문자열: ");
    printQueue(&q);

    return 0;
}