#include<stdio.h>
#define true 1
#define false 0

/**
* Function that returns if a numer is a prime-number. 
*/
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
/**
* Function that returns the factorial of a given number.
*/
int factorial(int num){
    if(num==1){
        return 1;
    }
    return num*factorial(num-1);
}
/**
* Function that returns if a number is a strong-number. 
*/
int isStrong(int num){
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