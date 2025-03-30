// Your code here...
#include <stdio.h>
int main(){
    int n; 
    scanf("%d", &n);
    for(int i = 0; i <n; i++){
        scanf("%d",&arr[i]);
    }
    int count = 0;
    for(int i = 0 ; i < n; i++){
        //2
        if(arr[i] == 2){
            count++;
        }
        else{
        for(int j = 2; j <= arr[i] /2){
            if(arr[i] % j != 0){
                count--;
            }
        }
        count++;
        }
    }
    printf("%d", count);
}