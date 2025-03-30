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
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",countev);
    printf("%d",countodd);
}