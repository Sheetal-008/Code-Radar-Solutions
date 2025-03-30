#include <stdio.h>
void greaterthankey(int arr[],int n,int key){
    int count = 0;
    for (int i=0;i<n;i++){
    
        if (arr[i]>key){
            count ++;
        }
    }
    printf("%d",count);
}
int main(){
    int n,key;
    scanf("%d",&n);
    scanf("%d",&key);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    greaterthankey(arr,n,key);
}