#include "main.h"

NODE** ReadListFromFile(int dataAmount, FILE* inputFile){
    if(dataAmount != 0){
    NODE** firstNode = (NODE**)malloc(sizeof(NODE));
    *firstNode = (NODE*)malloc(sizeof(NODE));
    NODE* tmp = *firstNode;
    char bufferChar = '\0';
    while(dataAmount > 0){
        for(int i = 0; i < MAX_SIZE; i++){
            *((*firstNode)->info + i) = ' ';
        } 
        fscanf(inputFile,"%[^\n]s",(*firstNode)->info);  
        bufferChar = fgetc(inputFile);    
        if(feof(inputFile)){
            printf("Koniec pliku\n");
            break;
        }
        dataAmount--;
        if(dataAmount != 0){
            (*firstNode)->next = (NODE*)malloc(sizeof(NODE));
            (*firstNode)->next->prev = *(firstNode);
            *firstNode = (*firstNode)->next;
        }
        if(dataAmount == 0)
            (*firstNode)->next = NULL;
    }
    *firstNode = tmp;
    tmp = NULL;
    return firstNode;
    }
    else
        return NULL;
}