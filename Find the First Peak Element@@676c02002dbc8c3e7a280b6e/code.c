// Your code here...

#include <stdio.h>
int main(){
    int n; 
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    int peak = -1;
    if(n==1){
        peak = arr[0];
    }
    else if(arr[0] > arr[1]){
        peak = arr[0];
    }
    else{
    
    for(int i = 1 ; i < n-1 ; i++){
        if(arr[i] > arr[i-1] && arr[i] > arr[i +1]){
            peak = arr[i];
            break;
        }
        }
    }
    
    if( peak == -1 && arr[n-1] > arr[n-2]){
        peak = arr[n-1];
    }
    printf("%d", peak);
}