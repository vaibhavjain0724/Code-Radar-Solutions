// Your code here...

#include <string.h>
#include <ctype.h>
char* caesarCipher(char message[100],int shift,char encrypted[100]){
    int i = 0;
    char base = 'a';
    
    while(message[i] != '\0'){
        if(isalpha(message[i])){ 
            base = islower(message[i]) ? 'a' : 'A';           
            encrypted[i] = ((message[i] - base + shift) % 26) + base; 
        }
        else{
            encrypted[i] = message[i];
        }
        i++;

    }
    encrypted[i] = '\0';
    return encrypted;
}