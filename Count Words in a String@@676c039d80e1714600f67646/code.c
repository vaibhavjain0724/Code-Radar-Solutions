// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char *str;
    scanf("%[^/n]", str);
    
    int count = 1;
    if(str[0] == 32 || str[0] == '\0'){
        count = 0;
    }
    // for(int i = 0 ; i < strlen(str) ; i++){
    //     if(str[i] == ' '){
    //         count++;
    //     }
    // }
    int l = 0;
    while(str[l] != '\0'){
        if(str[l] == 32){
            count++;
        }
        l++;
    }
    printf("%d",count);

}