#include "main.h"
void InsertAfter ( NODE* currentNode, OBJECT_TYPE* insertedObject){
    if(currentNode != NULL){
        NODE* insertedNode = new NODE();
        insertedNode->info = *insertedObject;
        insertedNode->prev = currentNode;
        insertedNode->next = currentNode->next;
        currentNode->next->prev = insertedNode;
        currentNode->next = insertedNode;
    }
}