// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0 ; i < n; i ++){
        scanf("%d", &arr[i]);
    }
    int max;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] > max){
            max= arr[i];
        }
    }
    int hash[max+1];
    for(int i = 0 ; i < n; i++){
        if(arr[i] > 0){
            hash[arr[i]]++;
        }
    }
    int ans= 1;
    for(int i = 1; i <= max; i++){
        if(hash[i] == 0){
            ans = i;
            break;
        }
    }
    printf("%d", ans);
    // for(int i = 0 ; i < n ; i++){
    //     int min_index = i;
    //     for(int j =  i + 1;j < n ; j++){
    //         if(arr[j] < arr[min_index]){
    //             min_index = j;
    //         }
    //     }
    //     int temp = arr[i];
    //     arr[i] = arr[min_index];
    //     arr[min_index] = temp;
    // }
    // int ans = arr[n-1] + 1;

    // for(int i = 0; i < n -1; i++){
    //     if(arr[i] > 0 && arr[i+1] - arr[i] != 1){
    //         ans= arr[i] + 1;
    //         break;
    //     }
    // }
    // int one = 0;
    // for(int i = 0 ; i < n ; i++){
    //     if(arr[i] == 1){
    //         one = 1;
    //     }
    // }
    // if(arr[n-1] < 0 || one != 1){
    //     printf("%d", 1);
    // }
    // else{

    // printf("%d", ans);
    // }
}
