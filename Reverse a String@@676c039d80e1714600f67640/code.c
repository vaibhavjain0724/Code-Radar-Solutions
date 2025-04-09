// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char a[100];
    scanf("%s",a);
    int l = 0;
    int n = strlen(a);
    char b[n];
    while(l < n ){
        b[l] = a[n-1];
        l++; n--; 
    }
    printf("%s",b);
    
}