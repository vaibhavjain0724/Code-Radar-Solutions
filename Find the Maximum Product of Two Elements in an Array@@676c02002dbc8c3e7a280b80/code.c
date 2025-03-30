// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int product = 0;
    int arr[n];
    scanf("%d", &arr[i]);
    for(int i = 0 ; i < n ; i++){
        for(int j= i + 1; j < n ; j++){
            if(arr[i] * arr[j] > product){
                product = arr[i] * arr[j];
            }
        }
    }
    printf("%d", product);
}