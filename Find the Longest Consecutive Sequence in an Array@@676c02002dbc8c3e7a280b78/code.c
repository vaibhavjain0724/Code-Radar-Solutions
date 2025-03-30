// Your code here...
#include <stdio.h>
int main(){
    int n; 
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n ; i++){
        scanf("%d", &arr[i]);
    }
    int count = 0;
    int arr2[n];
    for(int i = 0; i < n ; i++){
        arr2[i] = 0;
    }
    for(int i = 0; i < n-1; i++){
        if(arr[i+1] - arr[i] == 1 || arr[i] - arr[i+1] == 1 ) {
            count++;
            arr2[i] = count;
        }
        else{
            count = 0;
        }
    }
        int max_count = 0;
        for(int i = 0; i < n ;i++){
            if(arr2[i] > max_count ){
                max_count = arr2[i];
            }
        }
        printf("%d", max_count+1);
    }


