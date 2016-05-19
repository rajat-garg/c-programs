/*
 * Program to convert lowercase letters to uppercase letters
 * Author: Rajat Garg
 * Date: 01/May/2016
 * EMail: rg6693@gmail.com
 */
#include <stdio.h>
#include "string.h"

int main()
{
    char name[14];
    static int i;
    printf("Enter your name :");
    scanf("%s",&name);
    while(name[i]!='\0'){
        name[i] = name[i] - 32;
        i++;
    }
    printf("%s",name);
    return 0;
}

