// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char a[100];
    scanf("%s",a);
    int l = 0;

    int k = strlen(a);
    
    while(l <  k){
        a[l] = a[k-1];
        l++; k--; 
    }
    printf("%s",b);
    
}