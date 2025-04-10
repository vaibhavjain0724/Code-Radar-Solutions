// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char a[100];
    char b[100];
    scanf("%[^\n]",a);
    scanf("%[^\n]",b);
    char c[200];
    int n = strlen(a);
    int m = strlen(b);
    for(int i = 0 ; i < n ; i++){
        c[i] = a[i];
    }
    for(int i = n; i < m ; i++){
        c[i] = b[i-n];
    }
    printf("%s",c);
}