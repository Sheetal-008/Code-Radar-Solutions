#include <stdio.h>
int prime(int num){
    if (num<2){
        return 0;
    }
    for (int i=2;i<num;i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}
int countprime(int arr[],int n){
    int count =0;
    for (int i=0;i<n;i++){
        if (prime(arr[i])){
            count ++;
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
    countprime(arr,n);
    return 0;

}