#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        for (int sp=1;sp<=n-i;sp++){
            printf(" ");
        }
        for (j=1;j<=2*i-1;j++){
            printf("121");
        }
        printf("\n");
    }
}