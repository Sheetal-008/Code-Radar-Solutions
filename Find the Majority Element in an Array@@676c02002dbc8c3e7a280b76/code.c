#include <stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int visited[n];
    for (i=0;i<n;i++){
        visited[i] = 0;
    }
    int maxel,freq=0;
    for (i=0;i<n;i++){
        if(visited[i]==1){
            continue;
        }
        int count =1;
        for (int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count ++;
                visited[j]=1;
            }
        }
        if(count > freq){
            freq = count;
            maxel = arr[i];
        }
    }
    printf("%d ",maxel);
    return -1;

}