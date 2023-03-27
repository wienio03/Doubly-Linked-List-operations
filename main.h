#include <iostream>
#include <cstdarg>
typedef char OBJECT_TYPE[10];
#define MAX_SIZE 10
struct NODE{
NODE* prev;
OBJECT_TYPE info;
NODE* next;
};
void Insert(NODE**, OBJECT_TYPE);
void Insert(OBJECT_TYPE, NODE**);
void Insert(NODE**, NODE*, OBJECT_TYPE);
void Insert(NODE*, OBJECT_TYPE);
void Display(NODE*);
void Remove(NODE**);
void Remove(NODE*);
void Remove(NODE**, NODE*);
void Remove(NODE*, NODE**);
void ClearList(NODE**);
void ReadListFromFile(int dataAmount, ...);
void CreateList(NODE*, int argCount, ...);

