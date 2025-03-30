#include>stdio.h>
int main(){
    int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max = arr[0],max2=-1000;
    for (int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    for (int i =0;i<n;i++){
        if(arr[i]>max2 && arr[i]<max){
            max2=arr[i];
        }
    }
}
if (max == -1000){
    printf("-1");
}
else {
    printf("%d",max2);
}
return 0;
}