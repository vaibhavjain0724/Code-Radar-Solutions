// Your code here...
#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    scanf("%d", str);
    int n = 0;

    while(str[n] != '\0'){
        n++;
    }
    int e = n;
    int s = 0;
    char* ans = "Yes";
    while(s < e){
        if(str[s]!= str[e]){
            ans = "No";
            break;
        }
        s++;
        e--;
    }
    printf("%s", ans);
}