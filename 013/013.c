#include <stdio.h>
#include <stdlib.h>

int read_txt(long long unsigned(*arr)[50]){
    
    int i ,j;

    char ch;

    FILE *fp;

    fp = fopen("input.txt","r");

    for(i=0;i<100;i++){
        for(j=0;j<50;j++){
            fscanf(fp," %c",&ch);
            arr[i][j] = ch-'0';
        }
    }

    for(i=0;i<100;i++){
        for(j=0;j<50;j++){
            printf("%ld",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    


}


int main(){
    
    long long unsigned arr[100][50];
    
    

    read_txt(arr);

    int i ,j;

    long long unsigned temp=0;
    
    for(j=49;j>=1;j--){
        temp = 0;
        for(i=0;i<100;i++){
        
            temp += arr[i][j];
            
        }
        if(j<8)
            printf("%llu",temp%10);
        arr[0][j-1] += (temp/10);
    }
    temp = 0;
    for(i=0;i<100;i++){
        
        temp += arr[i][0];
            
    }

    
        printf("\nfuck %llu",temp);
        
        


}