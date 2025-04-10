// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char s[100];
    scanf("%s",s);
    char a,b;
    scanf(" %c",&a);
    scanf("%c",&b);

    for(int i = 0 ; i < strlen(s); i++){
        if(s[i] == a){
            s[i] =b;
        }
    }
    printf("%s",s);
}