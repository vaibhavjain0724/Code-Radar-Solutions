// // Your code here...
// #include <stdio.h>
// #include <limits.h>

// int main(){
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for(int i = 0; i < n ; i++){
//         scanf("%d", &arr[i]);
//     }
//     int max = 0;
//     for(int i = 0; i < n ; i++){
//         if(arr[i] > max){
//             max= arr[i];
//         }
//     }
//     int hash[max+1];
//     for(int i = 0; i <= max;i++){
//         hash[i] = 0;
//     }
//     for(int i = 0; i < n ; i++){
//         hash[arr[i]]++;
//     }
//     int majority = INT_MIN;
//     int majority_index= -1;
//     int dupes;
//     for(int i = 0; i <= max; i++){
//         if(hash[i] > majority){
//             majority = hash[i];
//             majority_index = i;
//         }
//         else if(hash[i] == majority){
//             dupes=hash[i];
//         }
//     }
    
//     if(dupes == majority){
//         printf("%d", -1 );
//     }
//     else{
//     printf("%d", majority_index);
//     }
// }

#include <stdio.h>
#include <limits.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n]; int visited[n];
    for(int i = 0; i < n ; i++){
        visited[i] = 0;
        scanf("%d", &arr[i]);
    }
    int cand = INT_MIN;
    for(int i = 0 ; i < n ; i++){
        if(count ==0 ){
            candidate = arr[i];
            count = 1;
        }
        else{
            if(candidate == arr[i]){
                count++;
            }
            else{
                count--;
            }
        }
        int c_count = 0;
        for(int i = 0; i < n ; i++){
            if(arr[i] == candidate){
                c_count++;
            }
        }
        if(c_count >= n/2){
            printf("%d", candidate);
        }
        else{
            printf("%d", -1);
        }
    }
}