/* Project Euler Problem 12
 * Problem: VSalue of the first triangle number to have over five hundred divisors
 * Author: Rajat Garg
 * Email: rg6693@gmail.com
 */
#include <stdio.h>

int main()
{
    int i,j,count=1,sum=0;
    for(i=1000;count<500;i+=2)
      {
          sum += i;
          count = 1;
          for(j=1;j<=sum/2;j++){
              if(sum%j == 0)
                count++;
          }
          printf(" %d \t%d\n",count,sum);
      }
    return 0;
}

