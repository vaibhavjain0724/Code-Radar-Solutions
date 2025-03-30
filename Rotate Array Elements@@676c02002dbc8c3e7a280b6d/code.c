// Your code here...
#include <stdio.h>
int main(){
    int n; int k;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0 ; i < n ; i ++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);
    int arr2[n];
    for(int i= 0 ; i < n; i ++){
        arr2[i] = arr[(i+k)%n];
    }
    for(int i = 0 ; i < n ; i ++){
        printf("%d ", arr2[i]);
    }
}