/*
 * Program to generate palindrome number of a number
 * Author: Rajat Garg
 * Date: 01/May/2016
 * EMail: rg6693@gmail.com
 */

#include <stdio.h>

int main()
{
    int number,digit,num;
    printf("\n Enter a number:");
    scanf("%d",&number);
    num = number;
    while(number!=0){
        digit = number % 10;
        number /= 10;
        num = num * 10 + digit;
    }
    printf("%d",num);
    return 0;
}