#include <stdio.h>
int runningsum(int arr[],int n){
    int sum = 0;
    for (int i =0;i<n;i++){
        sum = sum + arr[i];
        printf("%d ",sum);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    runningsum(arr,n);
}