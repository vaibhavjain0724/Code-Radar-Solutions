// Your code here...

#include <string.h>
#include <ctype.h>
char* caesarCipher(char message[100],int shift,char encrypted[100]){
    int i = 0;
    int base = 97;
    
    while(message[i] != '\0'){
        if(isalpha(message[i])){            
            encrypted[i] = ((message[i] - base + shift) % 26) + base; 
        }
        i++;

    }
    return encrypted;
}