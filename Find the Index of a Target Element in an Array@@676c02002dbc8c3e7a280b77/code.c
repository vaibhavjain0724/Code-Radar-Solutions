// // Your code here...
// #include <stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i = 0; i < n; i++){
//         scanf("%d", &arr[i]);
//     }
//     int target;
//     int index= -1;
//     scanf("%d", &target);
//     for(int i = 0 ; i < n ; i++){
//         if(arr[i] == target){
//             index= i;
//             break;
//         }
//     }
//     printf("%d", index);
// }

#include<stdio.h>

int main()
{
    int n,x;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);
    int idx = -1;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            idx = i;
            break;
        }
    }
    printf("%d",idx);
}
