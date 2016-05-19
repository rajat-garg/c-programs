/* Project Euler Problem 9
 * Problem: Find the only Pythagorean triplet (a, b, c), for which a + b + c = 1000
 * Author: Rajat Garg
 * Email: rg6693@gmail.com
 */
#include <stdio.h>

int main()
{
    int i,j,k,sum=0;
    for(i=3;i<=1000;i++){
        for(j=i+1;j<=997;j++){
            sum = 0;
            sum = i*i + j*j;
            for(k=j+1;k<=996;k++){
               if(sum == k*k)
                 if(i+j+k == 1000){
                    printf("\n%d %d %d",i,j,k);
                    printf("\n%d",i*j*k);
                    break;
                 }
            }     
        }
    }
    return 0;
}

