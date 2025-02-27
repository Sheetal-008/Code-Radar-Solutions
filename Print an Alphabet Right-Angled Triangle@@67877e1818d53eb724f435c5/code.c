#include <stdio.h>
int main(){
    int a,i,j;
    char ch='A'
    scanf("%d",&a);
    for (i=a;i>=1;i--){
        for (j=1;j<=i;j++){
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
}