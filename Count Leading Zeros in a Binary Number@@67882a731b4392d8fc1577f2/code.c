#include <stdio.h>
int main(){
    int a,count=0,num;
    scanf("%d",&num);
    if (num == 0){
        printf("32");
    }
    a=1<<31;
    while((num & a)==0){
        count ++;
        a>>=1;
    }
    printf("%d",count);
    return 0;
}