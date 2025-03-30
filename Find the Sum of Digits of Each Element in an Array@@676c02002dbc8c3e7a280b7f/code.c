#include <stdio.h>
void sumofel(int arr[],int n){
    for (int i=0;i<n;i++){
        int sum = 0;
        int temp = arr[i];
        if(temp<0){
            temp = -temp;
        }
        while(temp > 0){
            sum = sum + temp % 10;
            temp = temp / 10;
        }
        printf("%d ",sum);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sumofel(arr,n);
}