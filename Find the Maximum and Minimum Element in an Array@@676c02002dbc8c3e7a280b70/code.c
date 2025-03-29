void minmax(int arr[],int n){
    int min = arr[i],max = arr[i];
    for (i=1;i<n;i++){
        if(arr[i]<min) min = arr[i];
        if(arr[i]>max) arr[i]=max;
    }
    printf("%d",min);
    printf("%d",max);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}