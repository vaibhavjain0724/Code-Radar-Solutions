// Your code here...

int findUnsortedSubarray(int arr[], int n){
    int arr2[n];
    int j = 0 ;
    for(int i = n-1; i < n ; i ++){
        arr2[j] = arr[i];
        j++;
    }
    int l = 0 ; int r = n-1;
    int first = n+1;
    int second = n+2;
    for(int i = 0 ; i < n-1; i ++ ){
        if(arr[i+1] > arr[i]){
            first = i;
    }
    for(int i = 0 ; i < n-1; i ++ ){
        if(arr[i+1] < arr[i]){
            second = i;
    }
    return second - first;

    
}