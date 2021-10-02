#include <stdio.h>
#include <math.h>
/*double pow(int x,int y){
    int son=1;
    for(int i=0;i<y;i++ ){
        son = son*x;
    }
   return son;
}
*/


int main()
{
    int son = 99*99;
    int c =0;
    for(int i=2;i<=100;i++){

        for(int j=2; j<=100; j++){

            if(pow(i,j)<=100){
                for(int k = j+j;k<=100;k=k+j){

                c++;
                }

            }
            else break;
        }
    }


    //for(int i =0; i<c;i++){
        printf("%d",son-c);
    //}
    return 0;
}
