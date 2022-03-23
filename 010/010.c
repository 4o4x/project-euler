#include <stdio.h>


int main()
{

    int x = 2000000;
    int pr[2000000];
    //int a[1];
    int i,j,c=0;
    long s=0;

    for(i=2;i<x;i++){

        pr[i]=1;


    }

    for(i=2;i<x;i++){

        if(pr[i]==1){

            //a[c] = i;
            //c++;

            for(j=2;i*j<x;j++){
                pr[i*j]=0;
            }
        }

    }

    for(i=2;i<x;i++){
       if(pr[i]==1){
            s += i;
       }
    }
    printf("%ld",s);
}
