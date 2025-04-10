// Your code here...
#include <stdio.h>
#include <string.h>
char* reverse(char *a){
    int i = 0; j = strlen(a)-1;
    while(i < j){
        char temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    return a;
}

int main(){
    char a[100];
    scanf("%[^\n]",a);
    int  l = 0;
    char *ans="";
    int k = 0;
    int m = 0;
    if(strlen(a)>1){
        for(int i = 1; i < strlen(a); i++){
            if(a[i-1 != 32] && a[i] == 32){
                k = i;
                char *substr;
                strncpy(substr, &str[m], k-m);
                substr[k] = '\0';
                ans = ans + " " + reverse(substr);
            }
            m = i+1;
        }
    }
    printf("%s", ans);

}