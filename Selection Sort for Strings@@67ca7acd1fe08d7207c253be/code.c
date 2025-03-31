// Your code here...
#include <string.h>
void selectionSort(char arr[][100], int n){
    int min_index = 0;
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < n ; j++){
            if(strcmp(arr[min_index], arr[j])){
                min_index = j;
            }
        }
        char *temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index ] = temp;
    }
}
void printArray(char arr[][100], n){
    for(int i = 0 ; i < n; i++){
        printf("%s", arr[i]);
    }
}