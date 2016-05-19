/* Project Euler Problem 6
 * Problem: For first 100 numbers find the difference between the sum of the squares and the square of the sums.
 * Author: Rajat Garg
 * Email: rg6693@gmail.com
 */
#include <stdio.h>

int main()
{
    int i, sum=0, total=0,sum_sq = 0;
    //By Forumlas
    sum = 100*101/2;
    sum_sq = 201 * 101 * 100 / 6;
    printf("%d\n",sum*sum - sum_sq);

    sum = 0;
    for(i=1;i<=100;i++){
        total += i; 
        sum += i*i;
    }
    printf("%d\n",total*total - sum);
    return 0;
}