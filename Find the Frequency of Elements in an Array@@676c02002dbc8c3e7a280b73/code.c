// // Your code here...
// #include <stdio.h>
// int main(){
//     int n; 
//     scanf("%d", &n);
//     int arr[n];
//     for(int i = 0 ; i <  n ; i++){
//         scanf("%d", &arr[i]);
//     }
//     int max= arr[0];
//     for(int i = 0 ; i < n ;i++){
//         if(arr[i]>max){
//             max = arr[i];
//         }
//     }
//     int arr2[max+1];
//     for(int i = 0 ; i <= max; i++){
//         arr2[i] = 0;
//     }
//     for(int i = 0 ; i < n ; i++){
//         arr2[arr[i]]++;
//     }
//     for(int i = 0; i < n; i++ ){
//         if(arr2[arr[i]] != 0){
//             printf("%d %d", arr[i],arr2[arr[i]]);
//             printf("\n");
//             arr2[arr[i]] = 0;
//         }
//     }

// }


// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);;
//     int arr[n],visited[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//         visited[i]=0;
//     }
//     for(int i=0;i<n;i++){
//         if(visited[i]==1){
//             continue;
//         }
//         int count = 1;
//         for(int j=i+1;j<n;j++){
//             if(arr[i]==arr[j]){
//                 count++;
//                 visited[j] = 1;
//             }
//         }
//         printf("%d %d\n",arr[i],count);
//     }
// }



#include <stdio.h>
int main(){
    int n; 
    scanf("%d", &n);
    int arr[n];
    int visited[n];
    for(int i = 0 ; i < n ; i++){
        visited[i] = 0;
        scanf("%d", &arr[i])''
    }
    for(int i = 0 ; i < n ; i++){
        if(vistied[i] = 1){
            continue;
        }
        int count = 1;
        for(int j =  i + 1 ;j < n; j++){
            if(arr[i]  == arr[j]){
                count++;
            }
        }
        printf("%d %d\n",arr[i], count);
    }
}