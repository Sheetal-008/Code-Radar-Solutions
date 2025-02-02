#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int count = 0;
    while :(!(a&(~32)))
    {
        count ++;
        a = a<<1;
    }
    printf("%d",count);
    
    return 0;
}