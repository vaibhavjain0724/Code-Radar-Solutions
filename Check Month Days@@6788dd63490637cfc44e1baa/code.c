// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    switch(n){
        case 1, case 3, case 5, case 7, case 8, case 10, case 12:
            printf("%d", 31);
        case 2:
            printf("%d",28):
        case 4,6,9,11:
            printf("%d",30):
    }
}