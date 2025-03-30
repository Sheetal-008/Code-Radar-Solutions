#include<stdio.h>
int countevodd(int arr[],int n){
    int countev =0 , countodd =0;
    for (int i=0;i<n;i++){
        if (arr[i]%2==0){
            countev ++;
        }
        else{
            countodd ++;
        }
    }
    printf("%d ",countev);
    printf("%d",countodd);
}
int main(){
    int n,countev,countodd;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    countevodd(arr,n);
    
}