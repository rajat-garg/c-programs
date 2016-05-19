/* Project Euler Problem 5
 * Problem: Smallest number divisible by each of the numbers 1 to 20
 * Author: Rajat Garg
 * Email: rg6693@gmail.com
 */
#include <stdio.h>

int main()
{
    int i,j=2,num=20,f=0;
    for(i=20;i<=400000000;i+=20){
        j = 2;
        while(j!=20){
            if(i%j == 0)
            {
              f = 1;    
              j++;
            }
            else
            {
              f = 0;
              break;
            }  
        }
        if(f == 1){
          printf("%d",i);
          break;
        }  
    }
    return 0;
}