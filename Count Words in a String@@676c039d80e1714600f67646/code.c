// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char *str;
    scanf("%[^/n]", str);
    
    int count = 1;
    if(strlen(str) == 0){
        count = 0;
    }
    for(int i = 0 ; i < strlen(str) ; i++){
        if(str[i] == ' '){
            count++;
        }
    }
    printf("%d",count);

}