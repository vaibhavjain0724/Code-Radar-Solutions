// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char a[100];
    char b;
    scanf("%s",a);
    scanf("%c",&b );
    int count = 0;
    for(int i = 0; i < strlen(a);i++){
        if(a[i] = b){
            count++;
        }
    }
    printf("%d", count);
}