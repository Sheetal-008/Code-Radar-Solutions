#include <stdio.h>
int evenmax(int arr[],int n){
    int max=arr[0];
    for (int i=0;i<n;i++){
    if(arr[i]>max){
        if (arr[i]%2==0){
            max = arr[i];
            }
        }
        else {
            printf("-1");
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