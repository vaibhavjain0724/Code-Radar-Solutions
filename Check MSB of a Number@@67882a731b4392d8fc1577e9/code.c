// Your code here...

#include <stdio.h>
int main(){
    int a;
    scanf("%u",&a);
    if((a << 31)&1 == 1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
}