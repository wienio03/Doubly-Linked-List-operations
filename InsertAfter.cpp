#include "main.h"
void InsertAfter ( NODE* currentNode, OBJECT_TYPE insertedObject){
    if(currentNode != NULL){
        NODE* insertedNode = new NODE();
        
        insertedNode->prev = currentNode;
        for(int i = 0; i < MAX_SIZE && *(insertedObject + i) != '\0'; i++)
            *(insertedNode->info + i) = *(insertedObject + i);
        insertedNode->next = currentNode->next;
        
        currentNode->next->prev = insertedNode;
        currentNode->next = insertedNode;
    }
}