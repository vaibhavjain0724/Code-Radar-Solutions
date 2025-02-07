#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n; 
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        printf("%d", i +1);
        printf(" ");
    }
}