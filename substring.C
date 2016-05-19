/*
 * Program to print substring from a string
 * Author: Rajat Garg
 * Date: 19/May/2016
 * EMail: rg6693@gmail.com
 */
#include <stdio.h>
#include "string.h"
int main()
{
    char name[]="Something is very bad",newarr[50];
    char *ptr;
    static int i;
    int n = 4;
    ptr = name + 4;
    while(n!=0){
        n--;
        newarr[i] = *ptr;
        ptr++;
        i++;
    }
    printf("%s",newarr);
    return 0;
}

