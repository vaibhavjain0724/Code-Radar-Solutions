// Your code here...
#include <stdio.h>
#include<ctype.h>
int main(){
    char n;
    scanf("%c",&n);
    if(isupper(n)){
        printf("Uppercase");
    }
    else if(islower(n)){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
}