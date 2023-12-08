//
// Created by Alexandru Bara on 2023-11-16.
//

#include "AdvancedLinkedList.h"
#include "TestObject.h"
#include <stdio.h>
#include <stdlib.h>

// Function to create a new AdvancedLinkedList node with random data
struct AdvancedLinkedList* createAdvancedLinkedList() {
    int numOfObjects = rand() % 5 + 1;

    struct AdvancedLinkedList* newNode = (struct AdvancedLinkedList*)malloc(sizeof(struct AdvancedLinkedList));
    newNode->data = (struct TestObject*)malloc(numOfObjects * sizeof(struct TestObject));
    newNode->next = NULL;
    return newNode;
}

// Function to create a new AdvancedLinkedList node with specified data and next node
struct AdvancedLinkedList* de(struct TestObject* data, struct AdvancedLinkedList* next) {
    struct AdvancedLinkedList* newNode = (struct AdvancedLinkedList*)malloc(sizeof(struct AdvancedLinkedList));
    newNode->data = data;
    newNode->next = next;
    return newNode;
}

// Function to set data for an AdvancedLinkedList node
void setAdvancedLinkedListNodeData(struct AdvancedLinkedList* node, struct TestObject* data) {
    node->data = data;
}

// Function to set next node for an AdvancedLinkedList node
void setAdvancedLinkedListNodeNext(struct AdvancedLinkedList* node, struct AdvancedLinkedList* next) {
    node->next = next;
}

// Function to get data from an AdvancedLinkedList node
struct TestObject* getAdvancedLinkedListNodeData(struct AdvancedLinkedList* node) {
    return node->data;
}

// Function to get next node from an AdvancedLinkedList node
struct AdvancedLinkedList* getAdvancedLinkedListNodeNext(struct AdvancedLinkedList* node) {
    return node->next;
}

// Function to free memory allocated for an AdvancedLinkedList node
void destroyAdvancedLinkedList(struct AdvancedLinkedList* node) {
    if(node->next == NULL){
        free(node->data);
        free(node);
    }
    else{
        destroyAdvancedLinkedList(node->next);
        free(node->data);
        free(node);
    }
}