// Your code here...

#include <string.h>
#include <ctype.h>
char caesarCipher(char message[100],int shift,char encrypted[100]){
    int i = 0;
    while(message[i] != NULL){
        if(isalpha(message[i])){            
            strcpy(encrypted[i],(message[i]+shift)); 
        }
        i++;

    }
    return encrypted;
}