// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0 ; i< n ; i++){
        scanf("%d", &arr[i]);
    }
    int leader= arr[n-1];
    for(int i= 0 ; i< n ; i++){
        if(arr[i] > leader){
            leader = arr[i];
        }
    }
    printf("%d", leader);
}