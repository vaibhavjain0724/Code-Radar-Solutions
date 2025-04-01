// Your code here...
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0 ; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int diff =INT_MAX ;
    for(int i = 0 ; i< n; i++){
        for(int j = i + 1; j < n; j++){
            if(abs(arr[j]-arr[i]) < diff){
                diff = abs(arr[j]-arr[i]);
            }
        }
    }
    if(n == 1){
        printf("%d", -1);    
    }
    else{
    printf("%d", diff);
    }
}
