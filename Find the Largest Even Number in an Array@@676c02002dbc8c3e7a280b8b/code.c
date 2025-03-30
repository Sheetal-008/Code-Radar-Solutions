#include <stdio.h>
int evenmax(int arr[],int n){
    int max=-1;
    for (int i=0;i<n;i++){
    if (arr[i]%2==0){
    if(arr[i]>max){
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