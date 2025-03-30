// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0 ; i < n; i ++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0 ; i < n ; i++){
        int min_index = i;
        for(int j =  i + 1;j < n ; j++){
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
    int ans = arr[n-1] + 1;
    for(int i = 0; i < n -1; i++){
        if(arr[i] > 0 && arr[i+1] - arr[i] != 1){
            ans= arr[i] + 1;
            break;
        }
    }
    printf("%d", ans);
}
