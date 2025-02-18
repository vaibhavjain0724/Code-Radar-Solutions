// Your code here...
#include <stdio.h>
int main(){
    int n;
    int x = 0;
    scanf("%d",&n);
    for(int i = 2; i <= n/2; i++){
        if(n %i == 0){
            printf("Not Prime");
            x++;
        }
    }
    if(x == 0){
        printf("Prime");
    }

}