#include <stdio.h>

// char* welcome() {
//     return "Welcome to Code Radar!";
// }

int main() {
    int num1;
    int num2;
    char oper;
    int ans;

    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%ch",&oper);
    if(oper == "+"){
        ans = num1 + num2;
    }
    else if(oper == "-"){
        ans = num1 - num2;
    }
    else if(oper == "*"){
        ans = num1 * num2;
    }
    else{
        ans = num1 / num2;
    }
    printf("%d",ans);
    return 0;
}




}