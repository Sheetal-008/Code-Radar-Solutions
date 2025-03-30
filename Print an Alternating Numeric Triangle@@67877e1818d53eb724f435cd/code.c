#include <stdio.h>
int main(){
    int n,i,j,num=1;
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        for (j=1;j<=i;j++){
            if (j%i==0){
                printf("1 ");
            }
            else {
                printf("0 ");
            }
            
        }
        printf("\n");
    }
}