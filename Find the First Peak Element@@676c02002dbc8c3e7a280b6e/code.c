// Your code here...

#include <stdio.h>
int main(){
    int n; 
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    int peak;
    for(int i = i ; i < n-1 ; i++){
        if(arr[i] > arr[i-1] && arr[i] < arr[i +1]){
            peak = 1;
            break;
        }
    }
    printf("%d", arr[peak]);
}