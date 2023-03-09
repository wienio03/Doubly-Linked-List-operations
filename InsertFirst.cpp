#include "main.h"
void Insert( OBJECT_TYPE* insertedObject, NODE** firstNode){
    if(firstNode==NULL){
        NODE* newFirst = new NODE();
        firstNode = &newFirst;
        (*firstNode)->info = *insertedObject;
        (*firstNode)->prev = NULL;
        (*firstNode)->next = NULL;
    }
    else{
        NODE* newFirst = new NODE();
        newFirst->next = (*firstNode);
        newFirst->prev = NULL;
        newFirst->info = *insertedObject;
        (*firstNode)->prev = newFirst;
        firstNode = &newFirst;
    }
}