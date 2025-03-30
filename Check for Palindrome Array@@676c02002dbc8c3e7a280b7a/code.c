#include <stdio.h>
void paliarray(int arr[],int n){
    for (int i=0;i<n;i++){
        if (arr[i]=arr[n-i-1]){
            printf("YES");
        }
    }
    printf("NO");
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    paliarray(arr,n);
}