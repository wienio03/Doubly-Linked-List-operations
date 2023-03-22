#include "main.h"
//main file
int main(){
    NODE* test = new NODE();
    int x = 5;
    CreateList(test, 7, 10, 34, 37, 1234, 17, 11, 12);
    printf("-----------------------------\n");
    Display(test);
    printf("-----------------------------\n");
    //Insert(&test, &x);
    //Display(test);
    //Insert(&test, test->next, &x);
    Display(test);
    //Insert(&x, &test);
    Display(test);
    return 0;
}