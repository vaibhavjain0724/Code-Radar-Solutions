// Your code here...
#include <stdio.h>
int main(){
    int n; 
    scanf("%d", &n);
    int arr[n];
    for(int i = 0 ; i <  n ; i++){
        scanf("%d", &arr[i]);
    }
    int max= arr[0];
    for(int i = 0 ; i < n ;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    int arr2[max+1];
    for(int i = 0 ; i <= max; i++){
        arr2[i] = 0;
    }
    for(int i = 0 ; i < n ; i++){
        arr2[arr[i]]++;
    }
    for(int i = 0; i <= max; i++ ){
        if(arr2[arr[i]] != 0){
            printf("%d %d", arr[i],arr2[arr[i]]);
            printf("\n");
        }
    }

}