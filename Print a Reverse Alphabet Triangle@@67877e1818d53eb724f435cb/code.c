#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    for (i=n;i>=1;i--){
        char ch = 'A';
        for (j=1;j<=i;j++){
            printf("%c ",ch);
            ch ++;
        }
        
        printf("\n");
    }
}