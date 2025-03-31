// Your code here...
#include <stdio.h>
#include <limits.h>
int main(){
    int n;
    // int ans = -1;
    scanf("%d", &n);
    int arr[n];
    for(int i= 0; i < n ; i++){
        scanf("%d", &arr[i]);
    }
    int max =   INT_MIN;
    int smax = INT_MIN;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] > max){
            smax = max;
            max= arr[i];
        }
        else if(arr[i] != max && arr[i] > smax){
            smax= arr[i];
        }
        
    }
    if(n == 1 || smax == INT_MIN){
        printf("%d", -1);
    }
    else{
    printf("%d",smax);
    }
}