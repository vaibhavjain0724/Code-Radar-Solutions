// Your code here...
#include <stdio.h>

int main(){
    int n; 
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int max;
    int first = 0 ; int second = 1;
    for(int i = 0; i < n;i++){
        int max = i +1;
        for(int j = i +1; j < n ; j++){
            if(arr[j] > arr[max]){
                max = j;
            }
            arr[i] == arr[max];
        }
    }
    arr[n-1] = -1;
    for(int i = 0; i < n ; i++){
        printf("%d ", arr[i]);
    }
}