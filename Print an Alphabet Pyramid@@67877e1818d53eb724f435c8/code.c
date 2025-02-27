#include<stdio.h>
int main(){
    int a,i,j,k;
    scanf("%d",&a);
    for (i=1;i<=a;i++){
        char ch='A';
        for(j=1;j<=i;j++){
            printf(" ");
        }
        for (k=1;k<=2*i-1;k++){
            printf("%c",ch++);
        }
        printf("\n");
    }
}