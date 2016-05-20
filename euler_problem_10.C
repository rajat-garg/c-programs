/* Project Euler Problem 10
 * Problem: Sum of prime number till 2 million.
 * Author: Rajat Garg
 * Email: rg6693@gmail.com
 */

#include <stdio.h>
#include <math.h>
int main()
{
    long unsigned int i,j,f=0;
    long double sum=2;
    for(i=3;i<=1999999;i+=2){
        f = 0;
        for(j=3;j<=sqrt(i);j+=2){
            if(i%j==0){
              f = 1;
              break;
              }
        }
        if(f==0)
          sum += i;
    }
    printf("%Lf",sum);
    return 0;
}

