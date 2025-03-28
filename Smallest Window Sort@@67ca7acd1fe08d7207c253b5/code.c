// Your code here...

int findUnsortedSubarray(int arr[], int n){
    int arr2[n];
    int j = 0 ;
    for(int i = n-1; i < n ; i ++){
        arr2[j] = arr[i];
        j++;
    }
    int l = 0 ; int r = n-1;
    int first = 0;
    int second = 0;
    for(int i = 0 ; i < n-1; i ++ ){
        if(arr[i+1] < arr[i]){
            first = i;
            break;
    }
    }
    for(int i = 0 ; i < n-1; i ++ ){
        if(arr[i+1] > arr[i]){
            second = n- i-1;
            break;
    }
    }
    int arr3[second-first];
    for(int i = 0 ; i  < second-first;i++){
        arr3[i] = arr[first+i]; 
    }
    int size = sizeof(arr3)/sizeof(arr[1]); 
    
    int min = 0;
    for(int i = 0; i < size; i ++){
        if(arr3[i] < arr3[min]){
            min = i; 
        }
    }
    int max = 0;
    for(int i = 0; i < size; i ++){
        if(arr3[i] > arr3[max]){
            max = i; 
        }
    }
    for(int i=0; i < first; i++){
        if(arr[i] > arr3[min]);
        first = i;
    }
    for(int i=second; i < n; i++){
        if(arr[i] <  arr3[max]);
        second =n- i;
    }
    
    return second - first;
    // int sorted= n+1;
    // for(int i  =0 ; i < n-1 ; i ++){
    //     if(arr[i+1] < arr[i]){
    //         sorted = i;
    //     }
    // }
    // if(sorted == n+1){
    //     return 0;
    // }


    // return 5;

    
}