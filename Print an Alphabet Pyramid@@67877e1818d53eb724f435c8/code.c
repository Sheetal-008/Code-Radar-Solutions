#include<stdio.h>
int main(){
    int a,i,j,k;
    scanf("%d",&a);
    for (i=1;i<=a;i++){
        char ch='A';
        for (k=1;k<=i;k++){
            printf("%c",ch++);
        }
        printf("\n");
    }
}