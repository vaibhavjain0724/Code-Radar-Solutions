// Your code here...
#include <stdio.h>
#include <limits.h>
int main(){
    int n;
    int ans = -1;
    scanf("%d", &n);
    int arr[n];
    for(int i= 0; i < n ; i++){
        scanf("%d", &arr[i]);
    }
    int min_index;
    for(int i = 0 ; i < n ; i++){
        min_index = i;
        for(int j = i + 1; j < n;j++){
            if(arr[j] < arr[i]){
                min_index = j;
            }
        }
        int temp = arr[min_index];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
    for(int i = n; i >= 0 ; i--){
        if(arr[i] < arr[i-1]){
            ans = arr[i];
            break;
        }
    }
    printf("%d", ans);
}