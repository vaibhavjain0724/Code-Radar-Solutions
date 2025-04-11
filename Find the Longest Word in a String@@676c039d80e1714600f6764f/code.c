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
    int ind1 = 0; int ind2 = 0;
    while(str[i-1] != '\0'){
        if(str[i] != 32 ){
            if(i > 0 && str[i-1]== 32){
                j = i;
            }
            count++;
        }
        
        else if(str[i] == 32 || str[i] == '\0'){
            if(count > max_count){
                ind1 = j; ind2 = i-1;
                max_count= count;

            }
            count = 0;
        }
        i++;

    }
    char ans[100];
    for(int i = 0; i <= ind2 - ind1; i++){
        ans[i] = str[ind1+i];
    } 
    ans[ind2-ind1+1] = '\0';
    printf("%s", ans);   
}