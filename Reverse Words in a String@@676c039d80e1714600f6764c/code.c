// Your code here...
#include <stdio.h>
#include <string.h>
char* reverse(char *a, int i, int j){
    while(i < j){
        char temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++; j--;
    }
    return a;
}
char* concat(char* og, char* new){
    int n = strlen(og);
    og[n] = ' ';
    for(int i = 0; i < strlen(new); i++){
        og[n+1+ i] = new[i];
    }
    int k = strlen(og);
    return og;
}

int main(){
    char a[100];
    scanf("%[^\n]",a);
    int  l = 0;
    int m = 0;
    int k;
    char* ans;
    if(strlen(a)>1){
        for(int i = 1; i < strlen(a); i++){
            if(a[i-1 != 32] && a[i] == 32){
                k = i-1;
                concat(ans, reverse(a,k,m));
            }
            m = i+1;
        }
    }

    printf("%s", a);

}