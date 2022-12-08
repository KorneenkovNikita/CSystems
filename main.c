#include <stdio.h>
#include <stdlib.h>
#include "DoublyLinkedList.h"
#include "stack.h"
#include "queue.h"
#include "coins.h"

void ShowActionsWithDoubleLinkedList() {
    printf("Doubly linked list: \n");
    DoublyLinkedList* doublyLinkedList = CreateNewList();
    printf("Is doubly linked list empty? ");
    printf(ListIsEmpty(doublyLinkedList) ? "true\n" : "false\n");
    InsertFirstElement(doublyLinkedList, 6);
    printf("Is doubly linked list empty? ");
    printf(ListIsEmpty(doublyLinkedList) ? "true\n" : "false\n");
    InsertLastElement(doublyLinkedList, 4);
    Node* head = doublyLinkedList->Head;
    InsertBeforeElement(doublyLinkedList, head, 5);
    InsertAfterElement(doublyLinkedList, head, 7);
    PrintList(doublyLinkedList);
    RemoveHeadElement(doublyLinkedList);
    PrintList(doublyLinkedList);
    RemoveNode(doublyLinkedList->Head->Next);
    PrintList(doublyLinkedList);
    RemoveTailElement(doublyLinkedList);
    PrintList(doublyLinkedList);
}

void ShowActionsWithStack() {
    printf("\n\nStack: \n");

    Stack* stack = CreateStack();
    Push(stack, 10);
    Push(stack, 9);
    Push(stack, 8);
    Push(stack, 7);
    Push(stack, 6);
    printf("Is stack empty? ");
    printf(StackIsEmpty(stack) ? "true\n" : "false\n");
    PrintStack(stack);
    Pop(stack);
    PrintStack(stack);
    Pop(stack);
    PrintStack(stack);
    Pop(stack);
    PrintStack(stack);
    Pop(stack);
    PrintStack(stack);
    Pop(stack);
    free(stack);
}

void ShowActionsWithQueue() {
    printf("\n\nQueue: \n");

    Queue* queue = CreateQueue();
    printf("Is queue empty? ");
    printf(QueueIsEmpty(queue) ? "true\n" : "false\n");

    QueuePush(queue, 1);
    PrintQueue(queue);
    QueuePush(queue, 2);
    PrintQueue(queue);
    QueuePush(queue, 3);
    PrintQueue(queue);
    QueuePush(queue, 4);
    PrintQueue(queue);
    QueuePush(queue, 5);
    PrintQueue(queue);

    printf("Is queue empty? ");
    printf(QueueIsEmpty(queue) ? "true\n" : "false\n");

    QueuePop(queue);
    PrintQueue(queue);
    QueuePop(queue);
    PrintQueue(queue);
    QueuePop(queue);
    PrintQueue(queue);
    QueuePop(queue);
    PrintQueue(queue);
}

int main() {
    ShowActionsWithDoubleLinkedList();
    ShowActionsWithStack();
    ShowActionsWithQueue();
    ChangeCoins(99);
}
