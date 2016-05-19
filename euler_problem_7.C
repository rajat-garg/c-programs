#include <stdio.h>

int main()
{
    long int i,j,count=1,f=0;
    for(i = 3;count != 10001; i+=2){
        f = 0;
        for(j=3;j<=i/2;j++){
            if(i%j == 0){
                f = 1;
                break;
            }
        }
        if(f == 0)
          count++;
    }
    printf("%ld",i);
    return 0;
}