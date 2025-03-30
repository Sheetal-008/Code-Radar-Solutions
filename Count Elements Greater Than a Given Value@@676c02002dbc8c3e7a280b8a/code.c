#include <stdio.h>
void greaterthankey(int arr,int n,int key){
    int count = 0;
    for (int i=0;i<n;i++){
        int temp = arr[i]
        if (temp>key){
            count ++;
        }
    }
    printf("%d",count);
}
int main(){
    int n,key;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&key);
    greaterthankey(arr,n,key);
}