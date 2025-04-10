// Your code here...
#include <stdio.h>
#include <string.h>

int main(){
    char a[100], b[100];
    scanf("%s%s", a,b);
    char ha[27], hb[27];
    for(int i = 0; i < strlen(a); i++){
        ha[a[i]-71]++;
    }
    for(int i = 0; i < strlen(b); i++){
        hb[b[i]-71]++;
    }
    int l = 0;
    char *ans = "Yes";
    while(a[l] != '\0' && b[l] != '\0' ){
        if(a[l] != b[l]){
            ans= "No";
        }
    }
    printf("%s", ans);
}