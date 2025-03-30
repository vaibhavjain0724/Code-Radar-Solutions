// Your code here...
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int target;
    int index= -1;
    scanf("%d", &target);
    for(int i = 0 ; i < n ; i++){
        if(arr[i] == target){
            index= i;
            break;
        }
    }
    printf("%d", index);
}