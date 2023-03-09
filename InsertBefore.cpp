#include "main.h"
void Insert(NODE** firstNode, NODE* currentNode, OBJECT_TYPE* insertedObject){
    if(firstNode != NULL){
        if(*firstNode == currentNode){
            Insert(insertedObject, firstNode);
        }
        else{
            NODE* insertedNode = new NODE();
            currentNode->prev->next = insertedNode;
            insertedNode->prev = currentNode->prev->next;
            insertedNode->next = currentNode;
            insertedNode->info = *insertedObject;
        }
    }
}