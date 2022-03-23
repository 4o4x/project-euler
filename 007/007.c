#include <stdio.h>


int main()
{

    int x = 2000000;
    int pr[2000000];
    int a[10000];
    int i,j,c=0;
    long s=0;

    for(i=2;i<x;i++){

        pr[i]=1;


    }

    for(i=2;c<10001;i++){

        if(pr[i]==1){
            c++;


            for(j=2;i*j<x;j++){
                pr[i*j]=0;
            }
        }

    }


    printf("%d",i-1);
}
