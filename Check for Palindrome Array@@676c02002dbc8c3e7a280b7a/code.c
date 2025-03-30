#include <stdio.h>
int paliarray(int arr[],int n){
    for (int i=0;i<n;i++){
        if (arr[i]=arr[n-i-1]){
            return 1;
        }
        else{
           return 0;
        }
    }
    
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
   
    if (paliarray(arr,n)!=0){
        printf("YES");
    }
    else {
        printf("NO");
    }
}