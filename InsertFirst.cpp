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
        for(int i=0; (i < 10 || *(insertedObject+i) == '\0'); i++){
            *(newFirst->info+i) = *(insertedObject+i);
        }
        newFirst->info = *insertedObject;
        (*firstNode)->prev = newFirst;
        firstNode = &newFirst;
    }
}