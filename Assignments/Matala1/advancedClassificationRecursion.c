#include <stdio.h>
#include <math.h> //added for the pow function(in isArmstronghelper)
#include "NumClass.h"
#define true 1
#define false 0

/**
* This recursive-function recieves a number and its length and returns the armstrong sum.
*/
int isArmstronghelper(int num, int order)
{
    if(num == 0){
        return 0; 
    }
    return (pow(num%10,order) +isArmstronghelper(num/10, order));
}
/**
* This function calculates the length of number using recursion.
*/
int order(int num){
    if(num > 0)
    return(1 + order(num/10));
}
/**
* This function checks if a number is an Armstrong number using recursion.
*/
int isArmstrong(int num){
    if(num == isArmstronghelper(num, order(num)))
        return true; 
    return false;
}

/**
* This function checks if a number is a Palindrome number using recursion.
*/
int isPalindrome(int num){
    //getting the length of the int:
    int temp=num, len=0;
    while(temp>0){
        temp=temp/10;
        len++;
    }
    if(len<2){
        return true;
    }
    //creating an array of the integers:
    int arr[len], temp1=num, i=0;
    while(temp1>0){
        arr[i]=temp1%10;
        temp1=temp1/10;
        i++;
    }
    //checking the first and last digits in the array (base for recursion):
    if(arr[0] != arr[len-1]){
        return false;
    }
    //Creating the new number without the first and last digits:
    //finding the first digit:
    int firstD=num, count=0;
    while(firstD>10){
        firstD=firstD/10;
        count++;
    }
    while(count>0){
        firstD = firstD*10;
        count--;
    }
    int removeFirstD = num-firstD;
    return isPalindrome(removeFirstD/10);
}