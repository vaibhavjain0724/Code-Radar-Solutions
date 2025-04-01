// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0 ; i< n ; i++){
        scanf("%d", &arr[i]);
    }
    int max;
    for(int i = 0; i < n ; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    int hash[max+1];
    for(int i = 0; i <= max; i++){
        hash[i] = 0;
    }  
    }
    int arr2[n];
    int leader= arr[n-1];
    for(int i= n-1 ; i>= 0; i--){
        for(int j = i + 1; j < n; j++){
            if(arr[i] < arr[j]){
                hash[arr[i]]++;
            }
        }
    }
    for(int i = 0 ; i <= max;  i++){
        if(hash[i] == 0){
            printf("%d ", hash[i]);
        }
    }
}