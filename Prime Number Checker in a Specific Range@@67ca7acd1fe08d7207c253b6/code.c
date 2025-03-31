#include <stdio.h>
void primerange(int arr[],int a,int b){
    for (int i=a;i<=b;i++){
        int num = i;
        int isprime = 1;
        if(num==0||num==1){
            isprime = 0;   
        }
        for (int j=0;j<num;j++){
            if(num%j==0){
                isprime = 0;
            }
        }
        if(isprime == 1){
            printf("%d ",num);
        }
    }
}