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
    int smax = -1;
    for(int i = 0; i < n ; i ++){
        if(arr[i] >max );
        smax=max;
        max= arr[i];
    }
    printf("%d", smax);
}