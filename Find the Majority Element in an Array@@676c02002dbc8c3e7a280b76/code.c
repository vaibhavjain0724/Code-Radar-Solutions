// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n ; i++){
        scanf("%d", &arr[i]);
    }
    int max = 0;
    for(int i = 0; i < n ; i++){
        if(arr[i] > max){
            max= arr[i];
        }
    }
    int hash[max+1];
    for(int i = 0; i < n ; i++){
        hash[arr[i]]++;
    }
    int majority = 0;
    int majority_index= 0;
    for(int i = 0; i < max; i++){
        if(hash[i] > majority){
            majority = hash[i];
            majority_index = i;
        }
    }
    printf("%d", majority_index);
}