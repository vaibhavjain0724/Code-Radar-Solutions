// // Your code here..
// #include <stdio.h>
// int main(){
//     int n ;
//     scanf("%d", &n);
//     int arr[n];
//     for(int i = 0 ; i < n ; i++){
//         scanf("%d", &arr[i]);
//     }
//     int l = 0; int r = n-1;
//     char *ans = "YES";
//     while(l<= r){
//         if(arr[l] != arr[r]){
//             ans = "NO";
//             break;
//         }
//         l++;
//         r--;
//     }
//     printf("%s", ans);

// }


#include<stdio.h>
int palinndrome(int arr[],int n){
    int i=0;
    int j=n-1;
    while(i<=j){
        if(arr[i]!=arr[j]){
            return 0;
        }
        i++;
        j--;
    }
    return -1;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(palinndrome(arr,n)){
        printf("YES");
    }
    else{
        printf("NO");
    }
}