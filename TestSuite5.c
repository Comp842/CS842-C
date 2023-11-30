//
// Created by Alexandru Bara on 2023-11-30.
//

#include "TestSuite5.h"
#include "Timer.h"
#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to insert a value into the BST
struct Node* insert(struct Node* root, int data) {
    if (root == NULL) {
        return createNode(data);
    }

    if (data < root->data) {
        root->left = insert(root->left, data);
    } else if (data > root->data) {
        root->right = insert(root->right, data);
    }

    return root;
}

// Function to deallocate the memory used by the BST
void freeBST(struct Node* root) {
    if (root != NULL) {
        freeBST(root->left);
        freeBST(root->right);
        free(root);
    }
}

void suite5_test1() {
    // Start the timer
    Timer timer;
    startTimer(&timer);

    int numObjects = 1;
    int numLoops = 1000000000;

    for (int i = 0; i < numLoops; i++) {
        struct Node* tsRoot = NULL;

        // Insert values into the BST
        for (int j = 0; j < numObjects; j++) {
            tsRoot = insert(tsRoot, i);
        }

        // You can use the BST (tsRoot) as needed

        // Free the memory allocated for the BST
        freeBST(tsRoot);
    }
    // Stop the timer and calculate the elapsed time
    double elapsedMillis = getTimeSeconds(&timer);

    // Print the results
    printf("Time taken for %d tree to be created %d times: %f seconds\n", numObjects, numLoops, elapsedMillis);
}

void suite5_test2() {
    // Start the timer
    Timer timer;
    startTimer(&timer);

    int numObjects = 10;
    int numLoops = 100000000;

    for (int i = 0; i < numLoops; i++) {
        struct Node* tsRoot = NULL;

        // Insert values into the BST
        for (int j = 0; j < numObjects; j++) {
            tsRoot = insert(tsRoot, i);
        }

        // You can use the BST (tsRoot) as needed

        // Free the memory allocated for the BST
        freeBST(tsRoot);
    }
    // Stop the timer and calculate the elapsed time
    double elapsedMillis = getTimeSeconds(&timer);

    // Print the results
    printf("Time taken for %d tree to be created %d times: %f seconds\n", numObjects, numLoops, elapsedMillis);
}

void suite5_test3() {
    // Start the timer
    Timer timer;
    startTimer(&timer);

    int numObjects = 100;
    int numLoops = 10000000;

    for (int i = 0; i < numLoops; i++) {
        struct Node* tsRoot = NULL;

        // Insert values into the BST
        for (int j = 0; j < numObjects; j++) {
            tsRoot = insert(tsRoot, i);
        }

        // You can use the BST (tsRoot) as needed

        // Free the memory allocated for the BST
        freeBST(tsRoot);
    }
    // Stop the timer and calculate the elapsed time
    double elapsedMillis = getTimeSeconds(&timer);

    // Print the results
    printf("Time taken for %d tree to be created %d times: %f seconds\n", numObjects, numLoops, elapsedMillis);
}

void suite5_test4() {
    // Start the timer
    Timer timer;
    startTimer(&timer);

    int numObjects = 1000;
    int numLoops = 1000000;

    for (int i = 0; i < numLoops; i++) {
        struct Node* tsRoot = NULL;

        // Insert values into the BST
        for (int j = 0; j < numObjects; j++) {
            tsRoot = insert(tsRoot, i);
        }

        // You can use the BST (tsRoot) as needed

        // Free the memory allocated for the BST
        freeBST(tsRoot);
    }
    // Stop the timer and calculate the elapsed time
    double elapsedMillis = getTimeSeconds(&timer);

    // Print the results
    printf("Time taken for %d tree to be created %d times: %f seconds\n", numObjects, numLoops, elapsedMillis);
}

void suite5_test5() {
    // Start the timer
    Timer timer;
    startTimer(&timer);

    int numObjects = 10000;
    int numLoops = 100000;

    for (int i = 0; i < numLoops; i++) {
        struct Node* tsRoot = NULL;

        // Insert values into the BST
        for (int j = 0; j < numObjects; j++) {
            tsRoot = insert(tsRoot, i);
        }

        // You can use the BST (tsRoot) as needed

        // Free the memory allocated for the BST
        freeBST(tsRoot);
    }
    // Stop the timer and calculate the elapsed time
    double elapsedMillis = getTimeSeconds(&timer);

    // Print the results
    printf("Time taken for %d tree to be created %d times: %f seconds\n", numObjects, numLoops, elapsedMillis);
}

void suite5_test6() {
    // Start the timer
    Timer timer;
    startTimer(&timer);

    int numObjects = 100000;
    int numLoops = 10000;

    for (int i = 0; i < numLoops; i++) {
        struct Node* tsRoot = NULL;

        // Insert values into the BST
        for (int j = 0; j < numObjects; j++) {
            tsRoot = insert(tsRoot, i);
        }

        // You can use the BST (tsRoot) as needed

        // Free the memory allocated for the BST
        freeBST(tsRoot);
    }
    // Stop the timer and calculate the elapsed time
    double elapsedMillis = getTimeSeconds(&timer);

    // Print the results
    printf("Time taken for %d tree to be created %d times: %f seconds\n", numObjects, numLoops, elapsedMillis);
}

void suite5_test7() {
    // Start the timer
    Timer timer;
    startTimer(&timer);

    int numObjects = 1000000;
    int numLoops = 1000;

    for (int i = 0; i < numLoops; i++) {
        struct Node* tsRoot = NULL;

        // Insert values into the BST
        for (int j = 0; j < numObjects; j++) {
            tsRoot = insert(tsRoot, i);
        }

        // You can use the BST (tsRoot) as needed

        // Free the memory allocated for the BST
        freeBST(tsRoot);
    }
    // Stop the timer and calculate the elapsed time
    double elapsedMillis = getTimeSeconds(&timer);

    // Print the results
    printf("Time taken for %d tree to be created %d times: %f seconds\n", numObjects, numLoops, elapsedMillis);
}

void suite5_test8() {
    // Start the timer
    Timer timer;
    startTimer(&timer);

    int numObjects = 10000000;
    int numLoops = 100;

    for (int i = 0; i < numLoops; i++) {
        struct Node* tsRoot = NULL;

        // Insert values into the BST
        for (int j = 0; j < numObjects; j++) {
            tsRoot = insert(tsRoot, i);
        }

        // You can use the BST (tsRoot) as needed

        // Free the memory allocated for the BST
        freeBST(tsRoot);
    }
    // Stop the timer and calculate the elapsed time
    double elapsedMillis = getTimeSeconds(&timer);

    // Print the results
    printf("Time taken for %d tree to be created %d times: %f seconds\n", numObjects, numLoops, elapsedMillis);
}

void suite5_test9() {
    // Start the timer
    Timer timer;
    startTimer(&timer);

    int numObjects = 100000000;
    int numLoops = 10;

    for (int i = 0; i < numLoops; i++) {
        struct Node* tsRoot = NULL;

        // Insert values into the BST
        for (int j = 0; j < numObjects; j++) {
            tsRoot = insert(tsRoot, i);
        }

        // You can use the BST (tsRoot) as needed

        // Free the memory allocated for the BST
        freeBST(tsRoot);
    }
    // Stop the timer and calculate the elapsed time
    double elapsedMillis = getTimeSeconds(&timer);

    // Print the results
    printf("Time taken for %d tree to be created %d times: %f seconds\n", numObjects, numLoops, elapsedMillis);
}

void suite5_test10() {
    // Start the timer
    Timer timer;
    startTimer(&timer);

    int numObjects = 1000000000;
    int numLoops = 1;

    for (int i = 0; i < numLoops; i++) {
        struct Node* tsRoot = NULL;

        // Insert values into the BST
        for (int j = 0; j < numObjects; j++) {
            tsRoot = insert(tsRoot, i);
        }

        // You can use the BST (tsRoot) as needed

        // Free the memory allocated for the BST
        freeBST(tsRoot);
    }
    // Stop the timer and calculate the elapsed time
    double elapsedMillis = getTimeSeconds(&timer);

    // Print the results
    printf("Time taken for %d tree to be created %d times: %f seconds\n", numObjects, numLoops, elapsedMillis);
}

