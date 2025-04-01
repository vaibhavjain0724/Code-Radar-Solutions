// Your code here...
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0 ; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int diff =INT_MAX ;
    int a = 0; int b = 0;
    for(int i = 0 ; i< n; i++){
        for(int j = i + 1; j < n; j++){
            if((abs(arr[j]-arr[i]) < diff) ||(abs(arr[j]-arr[i]) == diff && arr[i] + arr[j] < a + b) ){
                diff = abs(arr[j]-arr[i]);
                a = arr[i]; b = arr[j];
            }

        }
    }
    if(n == 1){
        printf("%d", -1);    
    }
    else{
        if(b < a){
            printf("%d %d", b,  a);


        }
        else{
            printf("%d %d", a, b);
        }
    }
}
