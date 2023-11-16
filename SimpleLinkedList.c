//
// Created by Alexandru Bara on 2023-11-16.
//

#include "SimpleLinkedList.h"

#include <stdio.h>
#include <stdlib.h>



// Function to create a new SimpleLinkedList node with default values
SimpleLinkedList* createSimpleLinkedList() {
    SimpleLinkedList *node = (SimpleLinkedList *)malloc(sizeof(SimpleLinkedList));
    if (node != NULL) {
        node->data = 0;
        node->next = NULL;
    }
    return node;
}

// Function to create a new SimpleLinkedList node with specified data and next node
SimpleLinkedList* createSimpleLinkedListWithData(int data, SimpleLinkedList *next) {
    SimpleLinkedList *node = (SimpleLinkedList *)malloc(sizeof(SimpleLinkedList));
    if (node != NULL) {
        node->data = data;
        node->next = next;
    }
    return node;
}

// Function to create a new SimpleLinkedList node with specified data and a null next node
SimpleLinkedList* createSimpleLinkedListWithDataOnly(int data) {
    return createSimpleLinkedListWithData(data, NULL);
}

// Function to get the data of a SimpleLinkedList node
int getData(const SimpleLinkedList *node) {
    return node->data;
}

// Function to set the data of a SimpleLinkedList node
void setData(SimpleLinkedList *node, int data) {
    node->data = data;
}

// Function to get the next node of a SimpleLinkedList node
SimpleLinkedList* getNext(const SimpleLinkedList *node) {
    return node->next;
}

// Function to set the next node of a SimpleLinkedList node
void setNext(SimpleLinkedList *node, SimpleLinkedList *next) {
    node->next = next;
}

// Function to free the memory allocated for a SimpleLinkedList node
void destroySimpleLinkedList(SimpleLinkedList *node) {
    free(node);
}
