// Your code here...
#include <stdio.h>
#include <limits.h>
int main(){
    int max = INT_MIN;
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i= 0; i < n ; i++){
        scanf("%d", &arr[i]);
    }
    int arr2[n];
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
    printf("%d", arr[n-2]);
}