/*
 * Program to compare two strings
 * Author: Rajat Garg
 * Date: 19/May/2016
 * EMail: rg6693@gmail.com
 */
#include <stdio.h>
int xstrcmp(char *, char *);
int main()
{
    int k;
    char str1[]="Jerry",str2[]="J";
    k = xstrcmp(str1,str2);
    if(k==1)
      printf("Equals");
    else
      printf("Not equal");
    return 0;
}
int xstrcmp(char *s1,char *s2){
    int k = 0;
    while(*s1 == *s2){
        s1++;
        s2++;
        if(*s1 == '\0' && *s2 == '\0')
           k = 1;
    }
    return k;
}
