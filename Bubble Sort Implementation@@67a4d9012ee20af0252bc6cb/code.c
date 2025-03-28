// #include <stdio.h>

void bubbleSort(int arr[], int n){
    int min_index = 0 ;
    for(int i  = 0 ; i < n; i ++){
        min_index=  i;
        for(int j = i + 1; j < n ; j++ ){
            if(arr[j] > arr[i]){
                min_index = j;
            }
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }

    }
}
void printArray(int arr[], int n ){
    for(int i = 0 ; i < n ; i ++){
        printf("%d",arr[i]);
    }
}


// int main(){
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for(int i = 0 ; i < n ; i ++){
//         scanf("%d", &arr[i]);
//     }
//     bubbleSort(arr,n);
//     printArray(arr,n);  
// }