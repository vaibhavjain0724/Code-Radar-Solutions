// Your code here...
#include <stdio.h>
int main(){
    int n; 
    scanf("%d", &n);
    int arr[n];
    for(int i = 0 ; i < n ; i++ ){
        scanf("%d", &arr[i]);
    }
    int arr2[n];
    for(int i = 0; i < n; i++){
        arr2[i] = 0;
    }
    int j = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] != 0){
            arr2[j] = arr[i];
            j++;
        }
    }
    for(int i= 0; i < n ; i++){
        printf("%d ", arr2[i]);
    }
}