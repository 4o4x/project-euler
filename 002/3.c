#include <stdio.h>


int main()
{
    long long x = 6159487635,i,temp;

    for(i=2;i<=x;i++){
        if(x%i==0){
            x = x/i;
            temp = i;
            i =2;

        }


    }

printf("%lli",temp);
}
