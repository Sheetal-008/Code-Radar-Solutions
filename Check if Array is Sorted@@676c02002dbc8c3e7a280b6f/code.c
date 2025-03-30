#include <stdio.h>
int sorted(int arr[],int n){
    for (int p=0;p<n-1;p++){
        for (int c=0;c<n-p-1;c++){
            if(arr[c]>arr[c+1]){
                int temp = arr[c];
                arr[c] = arr[c+1];
                arr[c+1]=temp;
            }
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(sorted(arr,n)){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
}