// Your code here...
#include <stdio.h>

int main(){
    int n; 
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int first = 0 ; int second = 1;
    while(second < n){
        if(arr[first] < arr[second]){
            arr[first] = arr[second];
            first++;
            second++;
        }
        else{
            second++;
        }
    }
    arr[n-1] = -1;
    for(int i = 0; i < n ; i++){
        printf("%d", arr[i]);
    }
}