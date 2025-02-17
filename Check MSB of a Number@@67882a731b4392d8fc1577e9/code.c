// Your code here...

#include <stdio.h>
int main(){
    int a;
    scanf("%u",&a);
    if(a & (1<<31)){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
}