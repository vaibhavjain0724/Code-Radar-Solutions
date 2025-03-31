// Your code here...
char caesarCipher(char message[100],int shift,char encrypted[100]){
    
    while(message[i] != NULL){
        if(isalpha(message[i])){            
            strcpy(encrypted[i],message[i]-shift); 
                
        }
        i++;

    }
    return encrypted;
}