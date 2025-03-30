// Your code here...
int sumofDigits(int nun){
    int sum = 0;
    while(num > 0){
        int temp = num %10;
        sum += temp;
        num /= 10;
    }
    return sum;
}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d", &arr[i]);
    }
    int arr2[n];
    for(int i = 0 ; i < n; i++){
        arr2[i] = sumofDigits(arr[i]);
    }
    for(int i = 0 ; i < n ; i++){
        printf("%d ", arr2[i]);
    }
}