#include <stdio.h>
int evenmax(int arr[],int n){
    for (int i=0;i<n;i++){
    int max=arr[0];
    if (arr[i]%2==0){
        if(arr[i]>max){
                max = arr[i];
            }
        }
    }
    printf("%d",max);
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