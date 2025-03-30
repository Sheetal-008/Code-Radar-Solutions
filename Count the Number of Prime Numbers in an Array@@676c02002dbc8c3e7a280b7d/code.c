#include <stdio.h>
int primecount(int arr[],int n){
    int count = 0;
    for (int i=0;i<n;i++){
        if (arr[i]==0 || arr[i]==1){
            return 0;
        }
        else {
            for (arr[i]=2;arr[i]<n/2;arr[i]++){
                if(arr[i]%n==0){
                    return 0;
                }
            }
        }
    }
    return 1;
    count++;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if (primecount(arr,n))
    {
        printf("%d",primecount(arr,n));
    }
    else
    {
        printf("0");
    }
    return 0;

}