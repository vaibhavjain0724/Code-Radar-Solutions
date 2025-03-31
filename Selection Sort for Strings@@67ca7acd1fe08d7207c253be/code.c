#include <string.h>
void selectionSort(char arr[][100], int n) {
    int min_index = 0;
    for(int i = 0; i < n; i++) {
        min_index = i;
        for(int j = i+1; j < n; j++) {
            if(arr[j] != NULL && arr[min_index] != NULL && strcmp(arr[j], arr[min_index]) < 0){
                min_index = j;
            }
        }
        char temp[100];
        strcpy(temp, arr[i]);
        strcpy(arr[i], arr[min_index]);
        strcpy(arr[min_index], temp);
    }
}

void printArray(char arr[][100], int n) {
    for(int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }
}