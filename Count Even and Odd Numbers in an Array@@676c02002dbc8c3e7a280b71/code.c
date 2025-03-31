#include<stdio.h>
void countEvenOdd(int arr[],int n,int count[]){
    count[0] = 0;
    count[1] = 0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            count[0]++;
        }
        else{
            count[1]++;
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count[2];
    countEvenOdd(arr,n,count);
    printf("%d %d",count[1],count[0]);
}