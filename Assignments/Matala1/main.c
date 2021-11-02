#include<stdio.h>
#include"NumClass.h"

void main(){
    printf("Please enter two numers for the range: ");
    scanf("%d %d", &a, &b)
    printf("isPrime: ");
    for(a; a<=b; a++){
        if(isPrime(a)==1){
            printf("%d, ", a);
        }
    }
    printf("isStrong: ");
    for(a; a<=b; a++){
        if(isStrong(a)==1){
            printf("%d, ", a);
        }
    }
    printf("isPalindrome: ");
    for(a; a<=b; a++){
        if(isPalindrome(a)==1){
            printf("%d, ", a);
        }
    }
    printf("isArmstrong: ");
    for(a; a<=b; a++){
        if(isArmstrong(a)==1){
            printf("%d, ", a);
        }
    }
}