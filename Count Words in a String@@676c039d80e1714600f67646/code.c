// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char string[100];
    scanf("%[^\n]", string);
    
    // int count = 1;
    // if(str[0] == 32 || str[0] == '\0'){
    //     count = 0;
    // }

    // int l = 0;
    // while(str[l] != '\0'){
    //     if(str[l] == 32){
    //         count++;
    //     }
    //     l++;
    // }
    int count = 0 ;
    int f = 0; int s = 1;
    if(strlen(string) != 0){
        while(string[f] != '\0'){
            if((string[f] != 32 && string[s] == 32)|| (string[f] != 32 && string[s] == '\0')){
                count++;
            }
            f++; s++;
        }
    }

    printf("%d",count);

}