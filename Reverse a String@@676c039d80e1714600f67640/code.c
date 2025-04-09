// Your code here...
int main(){
    char a[100];
    scanf("%s",a);
    int n = 1;
    for(int i =0 ; i < 100; i++){
        if(a[i] == '\0') break;
        n = i;
    }
    char b[100];
    while(l < n ){
        b[l] = a[n];
        l++; n--; 
    }
    printf("%s",b);
    
}