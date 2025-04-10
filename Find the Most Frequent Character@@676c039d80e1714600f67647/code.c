// Your code here...
#include <stdio.h>
#include <string.h>

int main(){
    char s[100];
    scanf(" %[^\n]", s);
    int arr[27];
    for(int i= 0 ; i < 27; i++){
        arr[i] = 0;
    }
    int l = 0;
    while(s[l] != '\0'){
        arr[s[27]]++;
        l++;
    }
    int max = 0;
    for(int i = 0 ; i < 27; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    printf("%c", max);

}