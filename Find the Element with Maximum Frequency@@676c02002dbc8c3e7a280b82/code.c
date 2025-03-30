#include <stdio.h>
int main(){
    int n,i,max;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int visited[n];
    for (int i =0;i<n;i++){
        visited[i]=0;
    }
    int freqmax = 0,maxel;
    for (int i=0;i<n;i++){
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
        if(count >freqmax){
            freqmax = count;
            maxel = arr[i];
        }
    }
    printf("%d",maxel);
    return 0;
}