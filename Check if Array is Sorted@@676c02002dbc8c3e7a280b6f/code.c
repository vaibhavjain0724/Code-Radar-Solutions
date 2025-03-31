// Your code here...
// #include <stdio.h>
// int main(){
//     int n; 
//     scanf("%d", &n);
//     int arr[n];
//     for(int i = 0; i < n ; i++){
//         scanf("%d",&arr[i]);
//     }
//     char *str = "Sorted";
//     for(int i = 0; i < n -1; i ++){
//         if(arr[i] > arr[i+1]){
//             str = "Not Sorted";
//         }
//     }
//     printf("%s",str);

// }

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    char *str = "Sorted";
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            str = "Not Sorted";
        }
    }
    printf("%d",str);
}