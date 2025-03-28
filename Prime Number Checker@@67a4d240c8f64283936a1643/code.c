#include <stdio.h>
int isPrime(int num){
    if(num<2){
        return 0;
    }
    for (int t<2; t*t<=num; t++){
        if (num%t==0){
            return 0;
        }
    }
    return 1;
}