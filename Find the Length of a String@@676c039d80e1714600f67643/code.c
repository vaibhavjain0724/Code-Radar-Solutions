// Your code here...
#include <stdio.h>

int main(){
    char string[100];  
    scanf("%[^\n]", string);
    int l = 0;
    
    while(string[l] != '\0'){
        l++;
    }
    printf("%d", l);
}