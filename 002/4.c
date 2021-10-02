#include<stdio.h>


int main(){
    int n=300,m=300;
    int a,b,c,i=0,arr[10000];
    int sayi=0,sayi1=0,sayi2=0,sayi3=0;
    for(a=1;a<10;++a ){

        sayi1 = sayi + 100001*a;

        for(b=0;b<10;++b){

            sayi2 = sayi1 + 10010*b;

            for(c=0;c<10;++c){

                sayi3 = sayi2 + 1100*c;
                for(n=300;n<1000;n++){

                    for(m=300;m<1000;m++){

                        if(sayi3 == m *n){
                            arr[i]= sayi3;
                            //printf("%d %d %d\n",sayi3,m,n);
                        i++;
                        }
                    }


                }
            }

        }



    }

    printf("%d",arr[i-1]);

}
