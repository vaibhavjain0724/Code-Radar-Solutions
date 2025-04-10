// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    scanf("%[^\n]", str);
    
    int count = 1;
    if(str[0] == 32 || str[0] == '\0'){
        count = 0;
    }

    int l = 0;
    while(str[l] != '\0'){
        if(str[l] == 32){
            count++;
        }
        l++;
    }
    printf("%d",count);

}