// Your code here...
#include <stdio.h>
#include <string.h>

int main(){
    char s[100];
    scanf("%[^\n]", s);
    int arr[27];
    for(int i= 0 ; i < 27; i++){
        arr[i] = 0;
    }
    int l = 0;
    while(s[l] != '\0'){
        if(s[l] != 32){
            arr[s[l]-96]++;
        }
        l++;
    }
    int max = 0;
    char index;
    for(int i = 1 ; i < 27; i++){
        if(arr[i] > max){
            max = arr[i];
            index = i+96;
        }
    }
    printf("%c", index);

}