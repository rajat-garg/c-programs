/* Project Euler Problem 2
 * Problem: sum of all the even-valued terms in the Fibonacci sequence which do not exceed four million.
 * Author: Rajat Garg
 * Email: rg6693@gmail.com
 */
#include <stdio.h>

int main()
{
    int a=0,b=1;
    long int c=0,sum=0;
    while(c<4000000)
      {
          c = a + b;
          a = b;
          b = c;
          if(c % 2 == 0)
            sum += c;
      }
    printf("%ld",sum);
    return 0;
}

