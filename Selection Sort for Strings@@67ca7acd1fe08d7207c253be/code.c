// Your code here...
// #include <string.h>

int compare_string(char* str1, char *str2){
    int i = 0;

    while(str1[i] && str2[i]){
        if(str1[i] > str2[i]){
            return 1;
        }
        else if(str1[i] == str2[i]){
            i++;
        }
        else{
            return 2;
        }
        return 0;
    }
}
void selectionSort(char *arr[], int n){
    int min_index = 0;
    for(int i = 0; i < n ; i++){
        for(int j = i+1; j < n ; j++){
            if(compare_string(arr[min_index], arr[j]) == 2){
                min_index = j;
            }
        }
        char *temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}
void printArray(char arr[][100], int n){
    for(int i = 0 ; i < n; i++){
        printf("%s\n", arr[i]);
    }
}