// Your code here...
#include <stdio.h>
#include <string.h>

int main(){
    char a[100], b[100];
    scanf("%s", a);
    scanf("%s", b);
    char ha[27], hb[27];
    for(int i = 0; i < strlen(a); i++){
        ha[a[i]-71]++;
    }
    for(int i = 0; i < strlen(b); i++){
        hb[b[i]-71]++;
    }
    int l = 1;
    char *ans = "Yes";
    while(ha[l] != '\0' || hb[l] != '\0' ){
        if(ha[l] != hb[l]){
            ans= "No";
            break;
        }
    }
    printf("%s", ans);
}