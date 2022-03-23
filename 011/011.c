#include <stdio.h>
#include <stdlib.h>

int read_txt(int (*arr)[20]){
    
    int i ,j;

    FILE *fp;

    fp = fopen("input.txt","r");

    for(i=0;i<20;i++){
        for(j=0;j<20;j++)
            fscanf(fp," %d",&arr[i][j]);
    }


}


int main(){
    
    int arr[20][20];

    long int temp=1,result=0;

    read_txt(arr);

    int i ,j;

    for(i=0;i<20;i++){
        for(j=0;j<20;j++){
            temp = 1;
            if(j<=16){
                for(int k=0;k<4;k++){
                    temp *= (long int)arr[i][j+k]; 
                }
            }
            if(result<temp)
                result = temp;
            temp = 1;
        }
                
    }

    temp = 1;

    for(j=0;j<20;j++){
        for(i=0;i<20;i++){
            temp = 1;
            if(i<=16){
                for(int k=0;k<4;k++){
                    temp *= (long int)arr[i+k][j]; 
                }
            }
            if(result<temp)
                result = temp;
            temp = 1;
        }
                
    }

    temp = 1;

    for(i=0;i<20;i++){
        for(j=0;j<20;j++){
            temp = 1;
            if(i<=16 && j<=16){
                for(int k=0;k<4;k++){
                    temp *= (long int)arr[i+k][j+k]; 
                }
            }
            if(result<temp)
                result = temp;
            temp = 1;
        }
                
    }

    temp = 1;

    for(i=0;i<20;i++){
        for(j=0;j<20;j++){
            temp = 1;
            if(j>=3 && i<=16){
                for(int k=0;k<4;k++){
                    temp *= (long int)arr[i+k][j-k]; 
                }
            }
            if(result<temp)
                result = temp;
            temp = 1;
        }
                
    }

    temp = 1;
    
    printf("%ld",result);


}