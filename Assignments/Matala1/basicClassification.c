#include<stdio.h>
#define true 1
#define false 0

int isPrime(int num){
    if(num<2){
        return false;
    }
    for(int i=2; i<num; i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
//adding factorial
int factorial(int num){
    if(num==1){
        return 1;
    }
    return num*factorial(num-1);
}

int isStrong(int num){//num=145
    int sum=0, temp=num;
    while(temp>0){
        int digit = temp%10;
        sum += factorial(digit);
        temp = temp/10;
    }
    if(num!=sum){
        return false;
    }
    return true;
}