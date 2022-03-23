#include <stdio.h>
#include <stdlib.h>

int result = 0;

int read_txt(int (*arr)[15]){
    
    int i ,j;

    FILE *fp;

    fp = fopen("input.txt","r");

    for(i=0;i<15;i++){
        for(j=0;j<=i;j++)
            fscanf(fp,"%d",&arr[i][j]);
    }


}

int rec(int (*arr)[15],int n,int sum);

int main(){
    int i,j;
    int arr[15][15];

    read_txt(arr);

    for(i=0;i<15;i++){
        for(j=0;j<=i;j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }

}

int rec(int (*arr)[15],int n,int sum){
    
    if(n==15){
        if(sum>result)
            result = sum;
        return 0;
    }
    
    

    else{
        sum += arr[0][0];
        rec(&(arr[1][0]),n+1,sum);
        rec(&arr[1][0],n+1,sum);
    }

}