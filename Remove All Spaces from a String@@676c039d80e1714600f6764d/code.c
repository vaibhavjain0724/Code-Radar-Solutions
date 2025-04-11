// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char str[100];

    fgets(str,sizeof(str), stdin);
    char ans[100];
    int j = 0;
    for(int i = 0; i < strlen(str); i ++){
        if(str[i] != 32){
            ans[j] = str[i]; 
            j++;
        }
    }
    // int l = 0;
    // int m = 1;
    // while(str[l] != '\0'){
    //     if(str[l] != 32){
    //         str[l] = str[m];
    //         str[m] = 32;
    //     }
    //     l++;m++;
    // }
    printf("%s", ans);
}