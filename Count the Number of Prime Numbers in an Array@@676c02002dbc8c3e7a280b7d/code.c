#include <stdio.h>
int primecount(int arr[],int n){
    int count = 0;
    for (int i=0;i<n;i++){
        for (arr[i]=2;arr[i]<n;arr[i]++){
            if(arr[i]%n!=0){
                count ++;
                }
            }
        }
        return count;
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