// Your code here...
#include <stdio.h>
int main(){
    int n; 
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i <n; i++){
        scanf("%d",&arr[i]);
    }
    int count = 0;
    for(int i = 0 ; i < n; i++){
        //2
        if(arr[i] == 2){
            count++;
        }
        else if(arr[i] <2){
            
        }
        else{
        for(int j = 2; j < arr[i] ;j++){
            if(arr[i] % j == 0){
                count--;
                break;
            }
        }
        count++;
        }
    }
    if(count <= 0){
        printf("%d", 0);
    }
    else{
    printf("%d", count);
    }
}