// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    for(int i = 0 ; i < n; i ++){
        scanf("%d", &arr[i]);
    }
    int arr2[n];
    for(int i = 0 ; i < n ; i++){
        int min_index = i;
        for(int j =  i + 1; i < n ; j++){
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
    int ans;
    for(int i = 0; i < n -1; i++){
        if(arr[i] > 0 && arr[i+1] - arr[i] != 1){
            int ans= arr[i] + 1;
            break;
        }
    }
    printf("%d", ans);
}
