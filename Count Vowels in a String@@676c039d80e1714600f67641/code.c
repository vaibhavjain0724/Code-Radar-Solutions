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
        tolower(a[i]);
        if (a[i] == 'a' ||a[i] == 'e' ||a[i] == 'i' ||a[i] == 'o' ||a[i] == 'u'){
            count++;
        }
    }
    printf("%d", count);
}