#include <stdio.h>
#include <math.h> //added for the pow function(in isArmstrong)
#include "NumClass.h"
#define true 1
#define false 0

/**
* This function returns true(=1) if a given number is an Armstrong-number using a loop.
*/
int isArmstrong(int num){
    int sum=0, temp=num, power=0;
    while(temp>0){
        temp = temp/10;
        power++;
    }
    temp=num;
    while(temp>0){
        int digit = temp%10;
        sum += pow(digit, power);
        temp = temp/10;
    }
    if(sum!=num){
        return false;
    }
    return true;
}

int isPalindrome(int num){
    //getting the length of the int:
    int temp=num, len=0;
    while(temp>0){
        temp=temp/10;
        len++;
    }
    //creating an array of the integers:
    int arr[len], temp1=num, i=0;
    while(temp1>0){
        arr[i]=temp1%10;
        temp1=temp1/10;
        i++;
    }
    //checking the first and last in the array:
    for(int j=0; j<(len/2); j++){
        if(arr[j] != arr[len-1-j]){
            return false;
        }
    }
    return true;
}


