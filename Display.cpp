#include "main.h"
void Display(NODE* firstNode){
    if(firstNode != NULL ){
        int objectCount = 0;
        
        while(firstNode!=NULL){
            printf("object ID %d: %s\n", objectCount, firstNode->info);
            
            firstNode = firstNode->next;
            
            objectCount++;
        }
    
    }
    else{
        printf("List is empty\n");
    }
}