#include <stdio.h>
void uniquepair(int arr[],int n,int num){
    for (int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++)
        if(arr[i]+arr[j]==num){
            printf("%d %d",arr[i],arr[j]);
        }
    }
}
int main(){
    int n,num;
    scanf("%d",&n);
    int arr[n];
    for (int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&num);
    uniquepair(arr,n,num);
}