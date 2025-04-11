// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char str[100];

    fgets(str,sizeof(str), stdin);
    char *ans;
    int j = 0;
    for(int i = 0; i < strlen(str); i ++){
        if(str[i] != 32){
            ans[j] = str[i]; 
            j++;
        }
    }
    printf("%s", ans);
}