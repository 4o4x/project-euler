#include <stdio.h>

int number_of_div(long int number){
    
    long int i,re,x=0;
    long int result=1;
    re = number;
    
    while(number%2 == 0){
        number=number/2;
        x++;
    }

    result *=x+1;


    for(i=3;number>1;i=i+2){
        x = 0;
        
        while(number%i == 0){
            
            number=number/i;
            x++;
          
        }
        result *=x+1;
        
    }

    return result;

}

int main(){

    long int i;
    long int number = 1;

    for(i=2;;i++){
        number +=i;

        if(number_of_div(number)>=500){
            printf("%ld",number);
            return 0;
        }
    }

}