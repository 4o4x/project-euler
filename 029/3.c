#include <stdio.h>

int pow(x,y){
    int son=1;
    for(int i=0;i<y;i++ ){
        son = son*x;
    }
   return son;
}



int main()
{
    int x[10000];
    int son;
    int c =0,flag =0;
    for(int i=2;i<=10;i++){

        for(int j=2; j<=10; j++){
            flag =0;
            son = pow(i,j);
            //printf("xx=%d\n",son);


            for(int k=0; k<c; k++){
                if (x[k]==son){
                    flag=1;
                    break;

                }}
            //printf("%d",flag);

            if(flag==0){
                x[c]=son;
                c++;
            }






        }
    }


    //for(int i =0; i<c;i++){
        printf("%d",c);
    //}
    return 1;
}
