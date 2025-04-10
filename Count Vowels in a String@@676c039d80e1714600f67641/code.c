// Your code here...

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char a[100];
    scanf("%s", a);
    int n = strlen(a);
    int count = 0;
    for(int i =0 ; i <n ; i ++){
       
        if ( tolower(a[i]) == 'a' || tolower(a[i]) == 'e' || tolower(a[i]) == 'i' || tolower(a[i])] == 'o' || tolower(a[i]) == 'u'){
            count++;
        }
    }
    printf("%d", count);
}