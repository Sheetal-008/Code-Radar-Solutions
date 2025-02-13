
#include <stdio.h>
int main(){
    int n,i=2;
    scanf("%d",&n);
    if(n==0 & n==1){
        printf("Not prime");
    }
    while(i<=(n/2)){
        if (n%i==0){
            printf("Not prime");
            break;
        }
        i++;

    }

    if (i>(n/2)){
        printf("Prime");
    }

    return 0;
}