#include<stdio.h>
int fact(int m);

int main(){
    int m;
    printf("Enter your number: ");
    scanf("%d", &m);

    printf("the factorila of number is %d", fact(m));
    return 0;
}
int fact(int m){
    if(m==0 || m==1){
        return 1;
    }else{
        return fact(m-1)*m;
    }
}