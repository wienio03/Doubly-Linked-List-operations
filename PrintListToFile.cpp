#include "main.h"

void PrintListToFile(NODE* firstNode, FILE* outputFile){

    if(firstNode != NULL){
        int index = 0;
        fprintf(outputFile, "List:\n");
        while(firstNode != NULL){
            fprintf(outputFile, "NODE %d: %s\n", index, firstNode->info);
            firstNode = firstNode->next;
            index++;
        }    
    }
}