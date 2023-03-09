#include "main.h"
void Insert(NODE** firstNode, OBJECT_TYPE* insertedObject){
    if(firstNode==NULL){
        Insert(insertedObject, firstNode);
    }
    else{
        NODE* tmp = *firstNode;
        while((*firstNode)->next != NULL)
            *firstNode = (*firstNode)->next;
        NODE* newLast = new NODE();
        newLast->next = NULL;
        newLast->prev = *firstNode;
        newLast->info = *insertedObject;
        (*firstNode)->next = newLast;
        *firstNode = tmp;
    }
}
