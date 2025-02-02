#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",a^(b<<1));
    printf("%d",b^(~(a>>1)));
}