// Your code here...

#include <stdio.h>
int main(){
    int a;


    scanf("%d",&a);
    if(a<<a.size()&1 == 1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
}