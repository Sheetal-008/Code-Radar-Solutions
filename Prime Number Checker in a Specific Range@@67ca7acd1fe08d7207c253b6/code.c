#include <stdio.h>
int PrimesInRange(int a, int b){
    for(int i=a; i<=b; i++){
        if (int num <2){
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