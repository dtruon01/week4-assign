#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define  SIZE 100

// *** Function Protoypes ***
char *newString(char *str, int size);
void showArray(char **array, int size);

int main(int argc, char *argv[]){
    char *strings[SIZE];
    char input[SIZE];
    int count = 0;
    int length;

    while(fgets(input, SIZE, stdin) != NULL){
        length = strlen(input);
        strings[count] = newString(input, length+1);
        count++;
    }
    showArray(strings, count);
    for(int i = 0; i < count; i++){
        free(strings[i]);
    }

    return 0;
}

char *newString(char *str, int size){
    char *newStr = malloc(size);
    strcpy(newStr, str);
    return newStr;
}

void showArray(char **array, int size){
    for(int i = 0; i < size; i++){
        printf("%s", array[i]);
    }
}