// Your code here...
caesarCipher(char message[100],int shift,char encrypted[100]){
    
    for(int i= 0; i < n; i++){
        if(message[i] == NULL){
            break;
        }
        else{
            if(isalpha(message[i])){            
                strcpy(encrypted[i],message[i]-string); 
        }
    }
    printf("%[^\n]s", encrypted);
}