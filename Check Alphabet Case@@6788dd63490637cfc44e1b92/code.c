// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n >= 65 && n <= 90){
        printf("Lowercase");
    }
    else if(n > 90 ){
        printf("Uppercase");
    }
    else{
        printf("Not an alphabet");
    }
}