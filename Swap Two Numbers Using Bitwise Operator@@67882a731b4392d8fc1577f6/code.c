#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d %d",a^(b<<1),b^(a>>1));
    
}