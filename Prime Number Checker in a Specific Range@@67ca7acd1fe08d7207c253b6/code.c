#include <stdio.h>
int printPrimesInRange(int a, int b){
    for(int num=a; num<=b; num++){
        if (num <2){
            return 0;
        }
        for (int i=2; i<=num ; i++){
            if(num%i==0){
                return 0;
            }
        }
        return 1;
    }
}