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
#include<stdbool.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);
    int idx = -1
    // bool flag = false;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            // flag = true;
            idx = i;
            break;
        }
        if(flag==false){
            printf("%d",x);
        }
        else{
            printf("%d",idx)
        }
    }
}