#include <stdio.h>
#include <stdlib.h>

int main (){
    int x[1000];
    int i;
    char ch;
    long int sum=0,temp=1;

    
    
    for(i=0;i<1000;){
        
        scanf("%c",&ch);

        if(ch != '\n'){
            x[i] = ch -'0';
            //printf("%d",x[i]);
            i++;
        }

        
        
    }
    
    //printf(" fuck i %d %d i",x[0],i);
    
    for(int k=0;k<986;k++){

        for(int j=0;j<13;j++){
            temp *= (long int)x[k+j];
            //printf(" %d",x[k+j]);

            //printf("first : %d" , x[k+j]);
        }

        

        if(temp>sum){
            sum = temp;
            //printf(" temp : %d\n",temp);
        }


        temp = 1;
       
    }

    printf("Sum : %ld",sum);
    






}