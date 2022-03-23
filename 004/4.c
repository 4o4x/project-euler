#include<stdio.h>


int main(){
    int n=300,m=300;
    int a,b,c,i=0,arr[10000];
    int num0=0,num1=0,num2=0,num3=0;
    for(a=1;a<10;++a ){

        num1 = num0 + 100001*a;

        for(b=0;b<10;++b){

            num2 = num1 + 10010*b;

            for(c=0;c<10;++c){

                num3 = num2 + 1100*c;
                for(n=300;n<1000;n++){

                    for(m=300;m<1000;m++){

                        if(num3 == m *n){
                            arr[i]= num3;

                        i++;
                        }
                    }


                }
            }

        }



    }

    printf("%d",arr[i-1]);

}
