#include <stdio.h>
int main() {
    int a,result;
    scanf("%d",&a);
    
    if (a>>31 == 0){
        printf("Not Set");
    }
    else{
        printf("Set");
    }
    return 0;
}