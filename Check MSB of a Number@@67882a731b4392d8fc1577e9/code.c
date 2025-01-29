#include <stdio.h>
int main() {
    int a,result;
    scanf("%d",&a);
    result = a >> 31;
    if (a == 0){
        printf("Not Set");
    }
    else{
        printf("Set");
    }
    return 0;
}