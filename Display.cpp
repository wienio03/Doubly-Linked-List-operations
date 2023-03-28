#include "main.h"
void Display(NODE* firstNode){
    if(firstNode != NULL ){
        int objectCount = 0;
        NODE* tmp = firstNode;
        while(firstNode!=NULL){
            printf("%d: %s\n", objectCount, firstNode->info);
            
            firstNode = firstNode->next;
            
            objectCount++;
        }
        firstNode = tmp;
        tmp = NULL;
    
    }
    else{
        printf("List is empty\n");
    }
}