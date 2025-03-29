void minmax(int arr[],int n){
    int min = arr[0],max = arr[0];
    for (int i=1;i<n;i++){
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