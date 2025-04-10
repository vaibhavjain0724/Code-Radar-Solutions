// Your code here...
#include <stdio.h>
#include <string.h>

int main(){
    char a[100], b[100];
    scanf("%s", a);
    scanf("%s", b);
    int ha[27], hb[27];
    for(int i = 0; i < strlen(a); i++){
        ha[a[i]-96]++;
    }
    for(int i = 0; i < strlen(b); i++){
        hb[b[i]-96]++;
    }
    int l = 1;
    char *ans = "Yes";
   for(int l = 1; l < 27; l++){
        if(ha[l] != hb[l]){
            ans= "No";
            break;
        }
    }
    printf("%s", ans);
}