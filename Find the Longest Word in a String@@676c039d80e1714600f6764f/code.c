// Your code here...
#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    fgets(str,sizeof(str), stdin);
    int max_count = 0;
    int count = 0;
    int i = 0; 
    int j = 0;
    int ind1; int ind2;
    while(str[i] != '\0'){
        if(i>= 1){
            if(str[i] != 32 && str[i-1] == 32){
                str[j] =str[i];
            }
        }
        if(str[i] != 32 ){
            count++;
        }
        else if(str[i] == 32){
            if(count > max_count){
                ind1 = j; ind2 = i-1;
                max_count= count;

            }
            count = 0;
        }

    }
    char ans[100];
    for(int i = 0; i < ind2 - ind1; i++){
        ans[i] = str[ind1+i];
    } 
    ans[i+1] = '\0';
    printf("%s", ans);   
}