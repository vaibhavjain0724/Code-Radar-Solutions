// Your code here...
int main(){
    int n; 
    scanf("%d", &n );
    int arr[n];
    for(int i = 0 ; i <n ; i++){
        scanf("%d", &arr[i]);
    }
    int k;
    scanf("%d", &k);
    int arr2[n];
    for(int i = 0 ; i < n ; i++){
        arr2[i+k%n] = arr[i];
    }
    for(int i = 0 ; i < n; i++){
        printf("%d ", arr2[i]);
    }
}