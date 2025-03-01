#include <stdio.h>
int main(){
    int N,i,j;
    
    scanf("%d",&N);
    for (i=1;i<=N;i++){
        char ch='A';
        for(j=1;j<=i;j++){
            
            printf("%c ",ch++);
            
        }
        printf("\n");
    }
}