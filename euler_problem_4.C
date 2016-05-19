/* Project Euler Problem 4
 * Problem: Largest palindrome made from the product of two 3-digit numbers.
 * Author: Rajat Garg
 * Email: rg6693@gmail.com
 */
#include <stdio.h>

int main()
{
    int i,j,n,a=0,rev=0,num,largest=0;
    for(i=999;i>=100;i--){
        for(j=999;j>=i;j--){
        rev = 0;
        n = i * j;
        num = n;
        while(n!=0){
            a = n%10;
            rev =  rev * 10 + a; 
            n = n/10;
        }
        if(num == rev){
            if(largest<num)
               largest = num;
            break;
        }
        }
    }
    printf("%d",largest);
    return 0;
}