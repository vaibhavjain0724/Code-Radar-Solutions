// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char a[100];
    scanf("%s",a);
    int l = 0;

    int k = strlen(a);
    
    while(l <  k){
        char temp = a[l];
        a[l] = a[k-1];
        a[k-1] = temp;
        l++; k--; 
    }
    printf("%s",a);
    
}