// Your code here...
#include <stdio.h>
int main(){
    char n;
    scanf("%c",&n);
    if(n >= 65 && n <= 90){
        printf("Uppercase");
    }
    else if(n > 90 ){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
}