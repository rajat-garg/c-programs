/* Project Euler Problem 1
 * Problem: Sum of multiples of 3 or 5 below 1000.
 * Author: Rajat Garg
 * Email: rg6693@gmail.com
 */
#include <stdio.h>

int main()
{
    int sum=0,i;
    for(i=3;i<1000;i++)
      if(i%3==0 || i%5==0)
        sum = sum + i;
    printf("%d",sum);
    return 0;
}

