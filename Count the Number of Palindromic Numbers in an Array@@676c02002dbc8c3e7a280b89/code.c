#include <stdio.h>
void palicount(int arr[],int n){
    int count = 0;
    for (int i =0;i<n;i++){
        int temp = arr[i];
        int original = arr[i];
        int reverse = 0;
        while(temp > 0){
            reverse = reverse*10 + temp % 10;
            temp = temp/10;
        }
        if (original == reverse){
        count ++;
        }
    }
    printf("%d",count);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   palicount(arr,n);
   
}