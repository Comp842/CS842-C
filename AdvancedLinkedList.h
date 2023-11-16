//
// Created by Alexandru Bara on 2023-11-16.
//

#ifndef UNTITLED_ADVANCEDLINKEDLIST_H
#define UNTITLED_ADVANCEDLINKEDLIST_H

// Define the AdvancedLinkedList structure
typedef struct AdvancedLinkedList {
    int data;
    struct AdvancedLinkedList *next;
} AdvancedLinkedList;

AdvancedLinkedList* createAdvancedLinkedList();
AdvancedLinkedList* createAdvancedLinkedListWithData(int data, AdvancedLinkedList *next);
AdvancedLinkedList* createAdvancedLinkedListWithDataOnly(int data);
int getData(const AdvancedLinkedList *node);
void setData(AdvancedLinkedList *node, int data);
AdvancedLinkedList* getNext(const AdvancedLinkedList *node);
void setNext(AdvancedLinkedList *node, AdvancedLinkedList *next);
void destroyAdvancedLinkedList(AdvancedLinkedList *node);

#endif //UNTITLED_AdvancedLINKEDLIST_H
