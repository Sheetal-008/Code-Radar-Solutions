#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        for (int sp=1;sp<=n-i;sp++){
            printf(" ");
        }
        for (j = i; j >= 1; j--)  
            printf("%d", j);
        
        // Print increasing sequence
        for (j = 2; j <= i; j++)  
            printf("%d", j);
        
        printf("\n");
    }
}