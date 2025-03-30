#include <stdio.h>
void uniquepair(int arr[],int n,int num){
    int found =0;
    for (int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++)
        if(arr[i]+arr[j]==num){
            printf("%d %d\n",arr[i],arr[j]);
            found =1;
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