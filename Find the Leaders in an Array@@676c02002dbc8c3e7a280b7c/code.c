// Your code here...
#include <stdio.h>
#include <limits.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0 ; i< n ; i++){
        scanf("%d", &arr[i]);
    }
    int max = INT_MIN;
    for(int i = 0; i < n ; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    int hash[max+1];
    for(int i = 0; i <= max; i++){
        hash[i] = 0;
    }  
    for(int i= 0 ; i< n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] < arr[j]){
                
                i++;
            }
        }
        hash[arr[i]]++;

    }
    for(int i = max ; i >=0;  i--){
        if(hash[i] > 0){
            for(int i = 0; i < hash[i]; i++){
                printf("%d"; i);
                hash[i]--;
            }
        }
    }
}