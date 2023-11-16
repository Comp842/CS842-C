//
// Created by Alexandru Bara on 2023-11-16.
//

#ifndef UNTITLED_SIMPLELINKEDLIST_H
#define UNTITLED_SIMPLELINKEDLIST_H

// Define the SimpleLinkedList structure
typedef struct SimpleLinkedList {
    int data;
    struct SimpleLinkedList *next;
} SimpleLinkedList;

SimpleLinkedList* createSimpleLinkedList();
SimpleLinkedList* createSimpleLinkedListWithData(int data, SimpleLinkedList *next);
SimpleLinkedList* createSimpleLinkedListWithDataOnly(int data);
int getData(const SimpleLinkedList *node);
void setData(SimpleLinkedList *node, int data);
SimpleLinkedList* getNext(const SimpleLinkedList *node);
void setNext(SimpleLinkedList *node, SimpleLinkedList *next);
void destroySimpleLinkedList(SimpleLinkedList *node);

#endif //UNTITLED_SIMPLELINKEDLIST_H
