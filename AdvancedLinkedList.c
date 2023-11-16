//
// Created by Alexandru Bara on 2023-11-16.
//

#include "AdvancedLinkedList.h"
#include "TestObject.h"
#include <stdio.h>
#include <stdlib.h>



// Function to create a new AdvancedLinkedList node with default values
AdvancedLinkedList* createAdvancedLinkedList() {
    AdvancedLinkedList *node = (AdvancedLinkedList *)malloc(sizeof(AdvancedLinkedList));
    if (node != NULL) {
        node->data = ;
        node->next = NULL;
    }
    return node;
}

// Function to create a new AdvancedLinkedList node with specified data and next node
AdvancedLinkedList* createAdvancedLinkedListWithData(int data, AdvancedLinkedList *next) {
    AdvancedLinkedList *node = (AdvancedLinkedList *)malloc(sizeof(AdvancedLinkedList));
    if (node != NULL) {
        node->data = data;
        node->next = next;
    }
    return node;
}

// Function to create a new AdvancedLinkedList node with specified data and a null next node
AdvancedLinkedList* createAdvancedLinkedListWithDataOnly(int data) {
    return createAdvancedLinkedListWithData(data, NULL);
}

// Function to get the data of a AdvancedLinkedList node
int getData(const AdvancedLinkedList *node) {
    return node->data;
}

// Function to set the data of a AdvancedLinkedList node
void setData(AdvancedLinkedList *node, int data) {
    node->data = data;
}

// Function to get the next node of a AdvancedLinkedList node
AdvancedLinkedList* getNext(const AdvancedLinkedList *node) {
    return node->next;
}

// Function to set the next node of a AdvancedLinkedList node
void setNext(AdvancedLinkedList *node, AdvancedLinkedList *next) {
    node->next = next;
}

// Function to free the memory allocated for a AdvancedLinkedList node
void destroyAdvancedLinkedList(AdvancedLinkedList *node) {
    free(node);
}
