
void printPrimesInRange(int a,int b){
    for (int i=a;i<=b;i++){
        int num = i;
        int isprime = 1;
        if(num==0||num==1){
            isprime = 0;   
        }
        for (int j=2;j<num;j++){
            if(num%j==0){
                isprime = 0;
                break;
            }
        }
        if(isprime == 1){
            printf("%d ",num);
        }
    }
}