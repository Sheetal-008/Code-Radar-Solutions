#include <stdio.h>
int evenmax(int arr[],int n){
    
    for (int i=0;i<n;i++){
        int max=arr[0];
    if(arr[i]>max){
        if (arr[i]%2==0){
            max = arr[i];
            }
        }
    }
    printf("%d",max);
    return -1;
}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    evenmax(arr,n);
}