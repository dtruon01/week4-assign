#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
#define  SIZE 10
 
// *** Function Protoypes ***
char *newArray(char ch, int size);
void showArray(char *array, int size);
 
int main(int argc, char *argv[]){
    char *array;
 
    array=newArray('c',SIZE);
    showArray(array,SIZE);
    free(array);
    return 0;
}
 
char *newArray(char ch, int size){
    char *array = malloc(size*sizeof(char));
    int index;
 
    for(index=0;index<size;index++){
        array[index]=ch;
    }
    return array;
}
 
void showArray(char *array, int size){
    int index;
 
    printf("[");
    for(index=0;index<size;index++){
        if(index!=0){
            printf(", ");
        }
        printf("%c",array[index]);
    }
    printf("]\n");
}