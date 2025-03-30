// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0 ; i< n; i++){
        scanf("%d", &arr[n]);
    }
    int repeat = -1;
    for(int i = 0; i < n; i++){
        for(int j = i +1; j < n; j++){
            if(arr[i] == arr[j]){
                repeat = arr[j]; 
                break;
            }
        }
        if(repeat != -1){
            break;
        }
    }
    printf("%d", repeat);
}